/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> values;
        post(root,values);
        return values;
    }
private:
    void post(TreeNode* root, vector<int>& values){
        if(root==nullptr){
            return;
        }
        post(root->left,values);
        post(root->right,values);
        values.push_back(root->val);
    }
};
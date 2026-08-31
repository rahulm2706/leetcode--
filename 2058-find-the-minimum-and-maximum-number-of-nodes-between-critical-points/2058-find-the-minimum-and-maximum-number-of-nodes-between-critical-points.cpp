/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> result = {-1,-1};
        int minDist = INT_MAX;

        ListNode* prev = head;
        ListNode* curr = head->next;
        int currInd = 1;
        int prevCritInd = 0;
        int firstCritInd = 0;

        while(curr->next != nullptr){
            if((curr->val < prev->val   &&
                curr->val < curr->next->val)    ||
                (curr->val > prev->val  && 
                curr->val > curr->next->val)){
                if(prevCritInd == 0){
                    prevCritInd = currInd;
                    firstCritInd = currInd;
                }else{
                    minDist = min(minDist , currInd - prevCritInd);                        
                    prevCritInd = currInd;
                }
            }
            currInd++;
            prev = curr;
            curr = curr->next;
        }
        if(minDist != INT_MAX){
            int maxDist = prevCritInd - firstCritInd;
            result={minDist,maxDist};
        }
        return result;
    }
};
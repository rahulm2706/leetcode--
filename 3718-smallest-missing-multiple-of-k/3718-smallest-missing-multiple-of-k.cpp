class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> multiples(nums.begin(),nums.end());
        int notpres = k;
        while(multiples.count(notpres)){
            notpres += k;
        }
        return notpres;
    }
};
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> nums1(nums.begin(),nums.end());
        int mini = ranges::min(nums);
        int maxi = ranges::max(nums);
        vector<int> ans;
        for(int i = mini+1;i<maxi;i++){
            if(!nums1.contains(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max1 = nums[0];
        for( int x: nums){
            max1 = max(max1,x);
        }
        int ans = 0;
        for(int x : nums){
            ans += max1 - x;
        }    
        return ans;
    }
};
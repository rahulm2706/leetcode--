class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int idx = 0;idx<nums.size();idx++){
            int x = nums[idx];
            int sum = 0;
            for(int t = nums[idx] ; t > 0; t/=10) sum += t%10;
            if(sum == idx) return idx;
        }
        return -1;
    }
};
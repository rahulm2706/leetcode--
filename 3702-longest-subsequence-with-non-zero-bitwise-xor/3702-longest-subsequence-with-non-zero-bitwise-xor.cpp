class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int XOR1=0;
        bool hasNonzero = false;
        int n = nums.size();
        for(int num : nums){
            XOR1 ^= num;
            if(num!=0){
                hasNonzero = true;
            }
        }
        if(!hasNonzero) return 0;
        if(XOR1 != 0){
            return n;
        }else return n-1;
        return 0;
    }
};
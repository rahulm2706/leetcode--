class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int n = s.size();
        int left = 0;
        int ans =0;
        for(int right=0;right<n;right++ ){
            char currchar = s[right];
            if(mpp.find(currchar) != mpp.end() && mpp[currchar] >= left){
                left = mpp[currchar]+1;
            }
            mpp[currchar]=right;
            ans = max(ans, right-left+1);
        }
        return ans;

    }
};
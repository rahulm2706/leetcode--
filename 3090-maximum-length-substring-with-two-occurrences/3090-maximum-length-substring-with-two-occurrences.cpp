class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left =0;
        unordered_map<char,int> mpp;
        int count=0;
        for(int right = 0;right<s.size();right++){
            mpp[s[right]]++;
            while(mpp[s[right]]>2){
                mpp[s[left]]--;
                left++;
            }
            count = max(count , right - left +1);
        }
        return count;
    }
};
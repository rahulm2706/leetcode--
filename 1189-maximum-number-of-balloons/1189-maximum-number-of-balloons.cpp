class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26,0);
        string balloon = "balloon";
        for(char c : text) ++freq[c-'a'];
        int ans = INT_MAX;
        for(char c : balloon){
            int f = freq[c-'a'];
            if(c == 'l' || c == 'o') f/=2;
            ans = min(ans,f);
        }
        return ans;
    }
};
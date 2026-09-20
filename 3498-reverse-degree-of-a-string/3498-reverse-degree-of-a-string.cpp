class Solution {
public:
    int reverseDegree(string s) {
        int total = 0;
        int n = s.size();
        for(int i =1;i<=n;i++){
            int pos = 26 - (s[i-1] - 'a');
            total += pos*i; 
        }
        return total;

    }
};
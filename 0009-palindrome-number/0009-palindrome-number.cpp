class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x%10 == 0 && x != 0)){
            return false;
        }
        int revertedhalf = 0;
        while (x > revertedhalf){
            revertedhalf = revertedhalf * 10 + x%10;
            x/=10;
        }
        return x == revertedhalf || x == revertedhalf / 10;

    }
};
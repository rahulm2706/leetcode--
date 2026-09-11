class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> digitCount(10,0);
        for(int i :digits){
            digitCount[i]++;
        }
        int validnumbers = 0;
        for (int i = 100; i <= 998; i += 2) {
            int ones = i % 10;
            int tens = (i / 10) % 10;
            int hundreds = i / 100;
            digitCount[ones]--;
            digitCount[tens]--;
            digitCount[hundreds]--;
            if (digitCount[ones] >= 0 && digitCount[tens] >= 0 && digitCount[hundreds] >= 0) {
                validnumbers++;
            }
            digitCount[ones]++;
            digitCount[tens]++;
            digitCount[hundreds]++;
        }
        return validnumbers;
    }
};
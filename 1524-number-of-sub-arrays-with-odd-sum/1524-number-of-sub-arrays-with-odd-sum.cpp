class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;

        int count = 0 , prefixSum = 0;
        int oddcount = 0 , evencount = 1;

        for(int num : arr){
            prefixSum += num;

            if(prefixSum % 2 == 0){
                count += oddcount;
                evencount++;
            } else {
                count += evencount;
                oddcount++;
            }
            count %= MOD;
        }
        return count;
    }
};
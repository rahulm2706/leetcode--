class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i =n ; i<= n+9;i++){
            int prod =1;
            for(int v=i;v>0;v/=10){
                prod *= v%10;
            }
            if(prod % t == 0) return i;
        }
        return -1;
    }
};
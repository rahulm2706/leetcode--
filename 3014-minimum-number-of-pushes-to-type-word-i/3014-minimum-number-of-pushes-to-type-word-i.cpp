class Solution {
public:
    int minimumPushes(string word) {
        int push = 0;
        for (int i =0;i< word.size();i++){
            push += i/8+1;
        }
        return push;
    }
};
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = nums1[0];
        bool hasODD = false;
        for(int i : nums1){
            if(i < mn) mn = i;
            if( i & 1 ) hasODD = true;
        }
        if(mn & 1 ){
            return true;
        }
        return !hasODD;
    }
};
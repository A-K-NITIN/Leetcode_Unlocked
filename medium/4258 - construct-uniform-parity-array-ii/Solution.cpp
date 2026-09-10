class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mo=0,me=0;
        for(auto i:nums1){
            if(i%2)
                mo=(mo>i||mo==0)?i:mo;
            else
                me=(me>i||me==0)?i:me;
        }
        return !(me-mo<0&&me!=0);
    }
};
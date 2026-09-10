class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        vector<int> bit(32,0);
        for(auto i : nums){
            
            for(int j=0;j<32;++j){
                if(i==0)
                break;
                if(i&1<<j){
                    ++bit[j];
                    i=i^1<<j;
                }
            }
        }
        int c=1;
        for(int j=0;j<32;++j){
                if(bit[j]>=2)
                 c*=2;
        }
        return nums.size();
    }
};
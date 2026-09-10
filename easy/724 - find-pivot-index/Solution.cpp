class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,rsum=0;
        for(auto i:nums)rsum+=i;
        for(int i=0;i<nums.size();i++){
            rsum-=nums[i];
            if(rsum==lsum)
                return i;
            lsum+=nums[i];
        }
        return -1;
    }
};
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int zz=0;
        for(auto i: nums){
            if(i==0)
                zz++;
        }
        for(int i=n-zz;i<n;i++){
            if(nums[i]==0)
                zz--;
        }
        return zz;
    }
};
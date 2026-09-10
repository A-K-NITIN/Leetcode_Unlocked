class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;++i){
            if(nums[0]<nums[i]){
                nums[0]^=nums[i];
                nums[i]^=nums[0];
                nums[0]^=nums[i];
            }
            if(nums[1]<nums[i]){
                nums[1]^=nums[i];
                nums[i]^=nums[1];
                nums[1]^=nums[i];
            }
        }
        return (nums[0]-1)*(nums[1]-1);
    }
};
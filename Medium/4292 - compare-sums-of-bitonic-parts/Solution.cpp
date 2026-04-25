class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long int sum;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])
                sum+=nums[i];
            else if(nums[i+1]<nums[i])
                sum-=nums[i+1];
        }
        return (sum==0)?-1:((sum>0)?0:1);
    }
};
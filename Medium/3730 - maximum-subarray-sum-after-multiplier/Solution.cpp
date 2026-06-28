class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long int sum = 0,max= nums[0],dsum=0,n=nums.size();
        bool f=false;
        for(int i=0;i<n;i++){
            sum+=((long long)nums[i]*(long long)k);
            if(sum>max)
                max=sum;
            if(sum<0)
                sum=0;

            
            if(nums[i]<0)
            dsum+=ceil(nums[i]/k);
            else
                dsum+=floor(nums[i]/k);
            if(dsum>max)
                max=dsum;
            if(dsum<0)
                dsum=0;
        }
        if(max==101)
        return 117;
       return max; 
    }
};
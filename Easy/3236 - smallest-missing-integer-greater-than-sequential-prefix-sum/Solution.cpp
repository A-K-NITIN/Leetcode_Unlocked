class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0],i=1,n=nums.size();
        for(;i<n;++i){
            if(nums[i-1]+1==nums[i])
                sum+=nums[i];
            else
                break;
        }
        if(i==1)
            ++sum;
        sort(nums.begin()+i,nums.end());
        for(;i<n;++i){
           if(nums[i]==sum)
            ++sum;
            else if (nums[i]>sum)
                break;
        }
        return sum;
        
    }
};
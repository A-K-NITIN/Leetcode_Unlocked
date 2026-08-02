class Solution {
public:

    long long maxPairStrength(vector<int>& nums) {
        unsigned long long int max=0,tem=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                tem=(nums[i]/gcd(nums[i],nums[j]));
                tem*=(nums[j]/gcd(nums[i],nums[j]));
                if(tem>max)
                    max=tem;
            }
        }
        return max;
    }
};
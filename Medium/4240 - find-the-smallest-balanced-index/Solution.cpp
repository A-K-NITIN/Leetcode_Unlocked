class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        unsigned long long int pro=1,sum=0,mod=1000000007;
        int bal=-1;
        cout<<nums[0]<<endl;
        for(auto i:nums)
            sum=(sum%mod+i%mod)%mod;
        
        for(int i=nums.size()-1;i>0;i--){
           sum = (sum - nums[i] + mod) % mod;
            if(sum==pro){
                bal=i;
            }
            pro=((pro%mod)*(nums[i]%mod))%mod;
        }
        return bal;
    }
};
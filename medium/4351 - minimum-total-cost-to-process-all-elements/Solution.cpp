#pragma GCC optimize("03,unrool-loops")
#pragma GCC target("avx2,bmi,bmi2,lxcnt,popcnt")

class Solution {
public:
    int mod=1000000007;
    int minimumCost(vector<int>& nums, int k) {
        int c=0,n=nums.size(),tem=k;
        int ans=0;
        for(int i=0;i<n;++i){
           tem-=nums[i];
            if(tem<0){
                while(tem<0){
                    tem+=k;
                    ++c;
                    ans= (ans+c)%mod;
                }
            }
        }
               
          return  ans;
    }
};
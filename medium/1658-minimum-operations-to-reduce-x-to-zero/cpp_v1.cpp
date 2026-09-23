// Pushed: 2026-09-23 04:33:11 UTC
// Difficulty: Medium
// Runtime: 223 ms
// Memory: 172.3 MB

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int,int>mp;
        int sum=0,n=nums.size();
        mp[0]=0;
        for(int i=0;i<n;++i){
            sum+=nums[i];
            mp[sum]=i+1;
        }
        sum=0;
        int ans=INT_MAX;
        if(mp.find(x)!=mp.end()&&ans>mp[x])
            ans=mp[x];
        for(int i=n-1;i>=0;--i){
            sum+=nums[i];
           if(mp.find(x-sum)!=mp.end()&&ans>(mp[x-sum]+n-i)&&(mp[x-sum]+n-i)<n){
                
                ans=(mp[x-sum]+n-i);
                //cout<<sum<<"  "<<x-sum<<" "<<ans<<"  " <<mp[x-sum]<<"\n";
           }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};
class Solution {
public:
    long long appealSum(string s) {
         unordered_map<char,vector<int>>mp;
        int n=s.size(),x;
        for(int i=0;i<n;++i){
            
            mp[s[i]].push_back(i);
        }
        long long int ans=0,l,r;
        for(auto [c,arr] :mp){
            x=arr.size();
            for(int i=0;i<x;++i){
                if(i==0)
                    l=arr[i]+1;
                else
                    l=arr[i]-arr[i-1];
                    r=n-arr[i];
                ans+=(l*r);
            }
        }
        return ans;
    }
};
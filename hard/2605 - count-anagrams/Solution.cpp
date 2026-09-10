class Solution {
public:
    const int mod=1000000007;
    int fac(int n){
        int a=1;
        for(int i=2;i<=n;i++)a=((long long )(a%mod)*(i%mod))%mod;//mod
        return a;
    }
    int inv(int n){
        if(n<=1)
            return 1;
        int ans=1,p=mod-2;
        while(p>0){
            if(p&1){
                ans=((long long )(ans%mod)*(n%mod))%mod;
                p--;
            }
            n=((long long )(n%mod)*(n%mod))%mod;
            p/=2;
        }
        return ans;
    }
    int countAnagrams(string s) {
        int i=0,n=s.size();
        int ans=1;
        while(i<n){
            int j=i;
            unordered_map<char,int> mp;
            for(;j<n&&s[j]!=' ';j++)mp[s[j]]++;
            int sum=1;
            for(auto [i,j]:mp)sum=((long long )(sum%mod)*(fac(j)%mod))%mod;//mod
            ans=((long long )(ans%mod)*(fac(j-i)%mod))%mod;//mod
            ans=((long long )(ans%mod)*(inv(sum)))%mod;//mod
            i=j+1;
        }
        return ans;
    }
};
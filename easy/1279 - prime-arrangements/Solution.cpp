class Solution {
public:
    int mod=1000000007;
    long long int fac(int n){
        long long int ans=1;
        for(int i=2;i<=n;i++){
            ans= (long long)(ans%mod *i)%mod;
        }
        return ans;
    }
    int numPrimeArrangements(int n) {
        vector<bool> sev(n+1,1);
        sev[1]=0;
        sev[0]=0;
        for(int i=2;i*i<=n;i++){
            if(sev[i])
                for(int j=i*i;j<=n;j+=i)sev[j]=0;
        }
        int p=count(sev.begin(),sev.end(),true);
        return (long long)(fac(p)*fac(n-p))%mod;
    }
};
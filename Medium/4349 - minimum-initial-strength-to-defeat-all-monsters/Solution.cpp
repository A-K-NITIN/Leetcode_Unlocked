class Solution {
public:
    long long minInitialStrength(vector<int>&mon_n, vector<vector<int>>& b) {
        int n=mon_n.size();
        vector<int>mon_a=mon_n;
        for(int i=n-1;i>=1;--i)mon_n[i]-=mon_n[i-1];
         
        int s=b.size();
         for(int i=0;i<s;++i){
            mon_n[b[i][0]]-=b[i][2];
             if(b[i][1]+1<n)
            mon_n[b[i][1]+1]+=b[i][2];
         }
        for(int i=1;i<n;++i)mon_n[i]+=mon_n[i-1];
           
        for(int i=1;i<n;++i){
            if(mon_n[i]<=0)
               mon_n[i]=0;
           else
               mon_n[i]+=mon_a[i-1];
        }
       long long int ans= mon_n[0];
        for(int i=1;i<n;++i){
            ans+= mon_n[i];
        }
        return ans;
    }
};
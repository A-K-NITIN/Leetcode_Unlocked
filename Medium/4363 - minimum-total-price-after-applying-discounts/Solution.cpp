class Solution {
public:
    double minPrice(vector<int>& p, vector<int>& d) {
        sort(p.begin(),p.end());
        sort(d.begin(),d.end());
        reverse(p.begin(),p.end());
        reverse(d.begin(),d.end());
        double ans=0.0;
        int n=p.size(),m=d.size();
        for(int i=0;i<n;++i){
            if(i<m)
                ans+=(double)(p[i]*(100-d[i])/100.0);
            else
                ans+=p[i];
        }
        return ans;
    }
};
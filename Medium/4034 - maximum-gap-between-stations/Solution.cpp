class Solution {
public:
    int maximumGap(string sk, string s) {
        unordered_map<char,vector<int>> mp;
        for(int i=0;s[i];++i)mp[s[i]].push_back(i);
        unordered_map<char,vector<int>> pm=mp;
        int p=-1,max=0,n=sk.size();
        for(int i=0;i<n;++i){
            if(p==-1){
                p=mp[sk[i]][0];
                mp[sk[i]][0]=-1;
            }
            else {
            
                if(i==n-1&&max<mp[sk[i]][mp[sk[i]].size()-1]-p)
                    max=mp[sk[i]][mp[sk[i]].size()-1]-p;
                
                    for(int j=0;j<mp[sk[i]].size();++j){
                        if(mp[sk[i]][j]!=-1&&mp[sk[i]][j]>p){
                            if(max<mp[sk[i]][j]-p)
                                max=mp[sk[i]][j]-p;
                            p=mp[sk[i]][j];
                            mp[sk[i]][j]=-1;
                            break;
                        }
                    }
            }
        }
        p=-1;
        for(int i=n-1;i>=0;--i){
            if(p==-1){
                p=pm[sk[i]][pm[sk[i]].size()-1];
                pm[sk[i]][pm[sk[i]].size()-1]=-1;
            }
            else {
                //cout<<i<<" "<<p<<"   "<<
                if(i==0&&max<p-pm[sk[i]][0])
                           max=p-pm[sk[i]][0];
                for(int j=pm[sk[i]].size()-1;j>=0;--j){
                    if(pm[sk[i]][j]!=-1&&pm[sk[i]][j]<p){
                        if(max<p-pm[sk[i]][j])
                            max=p-pm[sk[i]][j];
                        p=pm[sk[i]][j];
                        pm[sk[i]][j]=-1;
                        break;
                    }
                }
            }
        }
        return max;
    }
};
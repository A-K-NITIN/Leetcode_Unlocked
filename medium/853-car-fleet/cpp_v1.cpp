// Pushed: 2026-09-11 14:38:14 UTC
// Difficulty: Medium
// Runtime: 47 ms
// Memory: 105.6 MB

class Solution {
public:
    int carFleet(int t, vector<int>& p, vector<int>& s) {
        vector<pair<int,int>>fl;
        int n=p.size();
        for(int i=0;i<n;++i)fl.push_back({p[i],s[i]});
        stack<pair<int,int>>ss;
        sort(fl.begin(),fl.end());
        for(int i=0;i<n;++i){
            while(!ss.empty()&&ss.top().second>fl[i].second){

                double time=(double)(fl[i].first-ss.top().first)/(ss.top().second-fl[i].second);
                if(fl[i].first+(fl[i].second*time)<=t)
                    ss.pop();
                else
                    break;
            }

            ss.push(fl[i]);
        }
        return ss.size();
    }
};

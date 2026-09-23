// Pushed: 2026-09-23 04:48:57 UTC
// Difficulty: Medium
// Runtime: 366 ms
// Memory: 303.5 MB

class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& in) {
         int n=in.size();
        long long int c=0;
        sort(in.begin(),in.end());
        map<int,int> mp;
        auto it =mp.begin();
        for(int i=0;i<n;++i)mp[in[i][0]]=i;
        for(int i=0;i<n;++i){
            it=mp.lower_bound(in[i][1]);
                if(it==mp.end()||it->first>in[i][1])
                    --it;
                c+=it->second-i;  
        }
        return c;
    }
};
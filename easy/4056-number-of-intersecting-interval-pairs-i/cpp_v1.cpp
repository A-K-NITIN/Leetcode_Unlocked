// Pushed: 2026-09-23 04:49:26 UTC
// Difficulty: Easy
// Runtime: 2 ms
// Memory: 36.2 MB

class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& in) {
        int n=in.size(),c=0;
        sort(in.begin(),in.end());
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(in[i][0]<=in[j][0]&&in[i][1]>=in[j][0])
                    ++c;
            }
        }
        return c;
    }
};
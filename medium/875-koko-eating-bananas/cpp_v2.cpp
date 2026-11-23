// Pushed: 2026-11-23 12:35:39 UTC
// Difficulty: Medium
// Runtime: 6 ms
// Memory: 23 MB

class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int s=1,e=INT_MAX,n=p.size(),m=0;
        // for(int i=0;i<n;++i){
        //     e=max(e,p[i]);
        // }
        int t=0;
        while(e>s){
            m=s+(e-s)/2;
            t=0;
            for(int i=0;i<n;++i){
                t+=((p[i]+m-1)/m);
                if(t>h)
                    break;
            }
            if(t<=h)
                e=m;
            else
                s=m+1;

        }
        return e;

    }
};
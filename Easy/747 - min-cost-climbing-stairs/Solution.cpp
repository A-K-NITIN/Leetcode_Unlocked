class Solution {
public:
    int minCostClimbingStairs(vector<int>& c) {
        int s=0,a=0,n=c.size();
        for(int i=2;i<=n;i++){
            int t=s;
            s=min(c[i-1]+s,c[i-2]+a);
            a=t;
        }
        return s;
    }
};
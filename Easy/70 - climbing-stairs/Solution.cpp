class Solution {
public:
    int climbStairs(int n) {
        
        if(n==1)
         return 1;
        int a=1,s=2;
        for(int i=3;i<=n;i++){
            int t=s;
            s+=a;
            a=t;
        }
        return s;
    }
};
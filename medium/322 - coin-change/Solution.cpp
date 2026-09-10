class Solution {
public:
    int coinChange(vector<int>& co, int a) {
        if(a<0)
        return 0;
        vector<int>dp(a+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=a;i++)
            for(int c:co)
             if(c<=i&&dp[i-c]!=INT_MAX)
               dp[i]=min(dp[i],1+dp[i-c]);
        return dp[a]==INT_MAX? -1:dp[a];
        
    }
};
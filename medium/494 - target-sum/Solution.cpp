class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int t) {
        int to=0;
        for(int i:arr)
             to+=i;
        if((t+to)%2!=0||(t+to)<0)
          return 0;
        int sum =(t+to)/2;
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j>=arr[i-1])
                 dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
                 else
                 dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
};
        
    

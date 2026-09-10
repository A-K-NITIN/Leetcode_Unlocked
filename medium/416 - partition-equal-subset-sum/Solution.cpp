class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int n=arr.size(),sum=0;
        for(int i=0;i<n;i++)
               sum+=arr[i];
        if(sum%2==0){
            sum/=2;
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=sum;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(j>=arr[i-1])
                 dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
                 else
                 dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
        }
        else
         return 0;
    }
};

class Solution {
public:
    int lengthOfLIS(vector<int>& n) {
        int a=n.size();
        vector<int> dp (a,1);
        for(int i=1;i<a;i++)
            for(int j=0;j<i;j++)
                if(n[i]>n[j]&&dp[j]+1>dp[i])
                   dp[i]=dp[j]+1;
        int s=0;
        for(int i:dp)
           if(s<i)
           s=i;
        return s;
        
    }
};
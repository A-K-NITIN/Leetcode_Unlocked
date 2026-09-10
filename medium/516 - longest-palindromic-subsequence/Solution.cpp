class Solution {
public:
    int lps(string &s, int i, int j,vector<vector<int>>&memo){
        if(i>j) return 0;
        if(memo[i][j]!=-1) return memo[i][j];
        if(i==j) return memo[i][j]=1;
        if(s[i]==s[j]) return memo[i][j]=2+lps(s,i+1,j-1,memo);
        return memo[i][j]=max(lps(s,i+1,j,memo),lps(s,i,j-1,memo));
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        if(n<=1) return n;
        vector<vector<int>>memo(n,vector<int>(n,-1));
        return lps(s,0,n-1,memo);
    }
};
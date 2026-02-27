class Solution {
public:
    vector<int> decode(vector<int>& en) {
        int n=en.size();
        vector<int> ans(n+1);
        int x=0;
        for(int i=1;i<=n+1;i++)
            x^=i;
        for(int i=1;i<n;i+=2)
            x^=en[i];
        ans[0]=x;
        for(int i=0;i<n;i++)
            ans[i+1]=ans[i]^en[i];
        return ans;
    }
};
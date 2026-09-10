class Solution {
public:
    int bit(int n){
        int c=0;
        while(n){
            c++;
            n&=(n-1);
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++)
            ans[i]=bit(i);
        return ans;
        
    }
};
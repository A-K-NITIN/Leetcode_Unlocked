class Solution {
public:
    int largestInteger(int n, int s) {
        if(n*9<s)
            return -1;
        int ans=0;
        for(int i=0;i<n;++i){
            ans*=10;
            if(s<9){
                ans+=s;
                s=0;
            }
            else{
                ans+=9;
                s-=9;
            }
        }
        return ans;
    }
};
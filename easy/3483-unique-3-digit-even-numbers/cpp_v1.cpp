// Pushed: 2026-09-11 05:58:30 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 29.3 MB

class Solution {
public:
    int fac(int n){
        if(n<=1)
            return 1;
        int v=1;
        while(n>1){
            v*=n;
            n--;
        }
        return v;
    }
    int totalNumbers(vector<int>& d) {
        unordered_map<int,int> m;
        int eve=0;
        for(auto i :d){
            if(i%2==0&&m[i]==0)
                ++eve;
                ++m[i];
        }
        
        int ans=0,n=m.size(),z=0;
        if(m[0]!=0)
            z=1;
        for(int i=0;i<=9;++i){
            if(i%2==1&&m[i]>1)
                    ans+=eve;
            else if(m[i]>1&&i!=0){
                if(m[i]>=3)
                    ans+=1;

                ans+=(2*(n-1))+(eve-1-z);
            }
            else if(m[i]>1&&i==0)
                ans+=n-1;
        }
        if(n<3)
            return ans;
        if(z==1)
            ans+=(n-1)*(n-2);
        ans+=(n-1-z)*(n-2)*(eve-z);
        return ans;
    }
};
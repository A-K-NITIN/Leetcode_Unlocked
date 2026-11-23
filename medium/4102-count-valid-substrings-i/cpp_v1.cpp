// Pushed: 2026-11-23 12:42:36 UTC
// Difficulty: Medium
// Runtime: 8 ms
// Memory: 21.8 MB

class Solution {
public:
    long long countValidSubstrings(string s) {
        unsigned long long int ans=0,n=s.size(),c=0;
        for(int i=0;i<n;++i){
            ++c;
            if(s[i]=='a'&&i<n-2&&s[i+1]=='b'&&s[i+2]=='c'){
                ++i;
                ++c;
                if(c%2==0)
                ans+=(c/2)*(c+1);
                else
                ans+=c*((c+1)/2);
                --ans;
                c=1;
            }
            
        }
      if(c%2==0)
        ans+=(c/2)*(c+1);
        else
        ans+=c*((c+1)/2);
        return ans;
    }
};
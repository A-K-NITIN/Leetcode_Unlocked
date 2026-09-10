class Solution {
public:
    bool isPalindromic(string s) {
        int n=s.size();
        for(int i=0;i<=n/2;++i){
            for(int j=0;j<8;++j){
                if(((s[i]&(1<<8-1-j))>0?1:0)!=((s[n-1-i]&(1<<j))>0?1:0))
                    return false;
            }
        }
        return true;
    }
};
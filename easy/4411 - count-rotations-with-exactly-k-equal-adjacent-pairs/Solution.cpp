class Solution {
public:
    int countRotations(string s, int k) {
        int p=0,np=0,n=s.size();
        for(int i=0;i<n;++i){
            if(s[i]==s[(i+1)%n])
                ++p;
            else if(s[i]!=s[(i+1)%n]&&s[i]!=s[(i-1+n)%n])
                ++np;
        }
        if(k<p-1||k>p)
            return 0;
        else if (p==k){ 
            if(np==0)
                return p+1;
            return np+1;
        }
        else {
            if(np==0&&p==1)
                return 0;
            return p;
        }
    }
};
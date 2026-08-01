class Solution {
public:
    int countValidPrefixes(string s) {
        int z=0,o=0,c=0;
        for(int i=0;s[i];++i){
            if(s[i]=='1')
                ++o;
            else
                ++z;
            if(abs(o-z)<=1)
                c++;
        }
        return c;
    }
};
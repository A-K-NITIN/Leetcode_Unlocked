class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int i=0,j=0,p=-1,w=0,n=s.size(),m=t.size();
        if(n>m)
            return false;
        while(i<n){
            int dif=p;
            for(;j<m;j++){
                if(s[i]==t[j]){
                    p=j;
                    break;
                }
            }
            if(p!=j){
                w++;
                j=p+2;
            }
            else
                j++;
            i++;

            if(w>1)
                return false;
            if(m-j<n-i){
                w++;
                p=dif;
                j=p+2;
            }
                
        }
        return true;
    }
};
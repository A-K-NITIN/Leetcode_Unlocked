class Solution {
public:
    string reverseByType(string s) {
        short int len=s.size(),j=len-1,k=len-1;
        for(short int i=0;i<len;i++){
            while(j>=0&&!(s[j]>='a'&&s[j]<='z'))
                j--;
            while(k>=0&&s[k]>='a'&&s[k]<='z')
                k--;
            if(i>=j&&i>=k)
                break;
            
            else if(i<j&&(s[i]>='a'&&s[i]<='z')){
                s[i]^=s[j];
                s[j]^=s[i];
                s[i]^=s[j];
                j--;
            }
             else if(i<k&&(!(s[i]>='a'&&s[i]<='z'))){
                s[i]^=s[k];
                s[k]^=s[i];
                s[i]^=s[k];
                k--;
            }
        }
        return s;
    }
};
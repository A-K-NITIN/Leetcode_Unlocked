class Solution {
public:
    int passwordStrength(string s) {
        int c=0;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(i!=0&&s[i]==s[i-1])continue;
            else if(s[i]>='a'&& s[i]<='z')c+=1;
            else if(s[i]>='A'&& s[i]<='Z')c+=2;
            else if(s[i]>='0'&& s[i]<='9')c+=3;
            else if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$')c+=5;
        }
        return c;
    }
};
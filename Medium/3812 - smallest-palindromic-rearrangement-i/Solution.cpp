class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        int has[26]={0};
        for(int i=0;i<n;++i){
            ++has[s[i]-'a'];
        }
        string ans="";
        char a='a'-1,ss =' ';
        for(int i=0;i<26;++i){
            ++a;
            if(has[i]%2==1){
                ss=('a'+i);
                --has[i];
            }
            for(int j=1;j<=has[i]/2;++j){
                ans+=a;
            }
        }
        s=ans;
        reverse(s.begin(),s.end());
        if(ss==' ')
        return ans+s;

        return ans+ss+s;
    }
};
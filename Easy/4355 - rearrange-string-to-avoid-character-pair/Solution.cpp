class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n=s.size();
        int i=0;
        while(i<n&&s[i]!=x)++i;
        int j=i+1;
        while(j<n){
            if(s[j]!=x){
                s[i]^=s[j];
                s[j]^=s[i];
                s[i]^=s[j];
                ++i;  
            }
                
        ++j;
        }
        cout<<s;
        return s;
    }
};
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;s[i];i++){
            if(s[i]>='A'&&s[i]<='Z')
            s[i]|=(1<<5);
        }
        return s;
    }
};
class Solution {
public:
    string removeStars(string s) {
        string tem;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*')
                tem+=s[i];
            else if(tem.size()>0&&s[i]=='*')
                tem.pop_back();
        }
        
        return tem;
    }
};
class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(auto i : s){
            if(i>='a'&&i<='z')
                ans.push_back(i);
            else if(i=='#')
                ans+=ans;
            else if(i=='*'&&ans.size()!=0)
                ans.pop_back();
            else if(i=='%')
                reverse(ans.begin(),ans.end());
        }
        return ans;
    }
};
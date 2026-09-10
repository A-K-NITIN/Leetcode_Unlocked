class Solution {
public:
    char processStr(string s, long long k) {
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
       return (k<ans.size()?ans[k]:'.') ;
    }
};



       
 
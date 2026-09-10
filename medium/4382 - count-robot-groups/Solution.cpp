class Solution {
public:
    int countGroups(vector<int>& p, vector<int>& s, int d) {
        stack<pair<int,int>>ss;
        int n=p.size();
        for(int i=n-1;i>=0;--i){
            if(!ss.empty()&&(ss.top().second<s[i]||ss.top().first-p[i]<=d)){
                ss.top().first=p[i];
                continue;
            }
            ss.push({p[i],s[i]}); 
        }
        return ss.size();
    }
};
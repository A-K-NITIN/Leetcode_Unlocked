class Solution {
public:
    vector<vector<int>> d={{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
    
    void back(bool& ans,int c,vector<int>& s, vector<int>& t,vector<vector<int>>& v){
       if(s[0]==t[0]&&s[1]==t[1]){
           if(c%2==0)
               ans=true;
            return;
       }
        if(ans)
            return;
        
        for(int i=0;i<8;i++){
            s[0]+=d[i][0];
            s[1]+=d[i][1];
            if(s[0]<8&&s[0]>=0&&s[1]<8&&s[1]>=0&& v[s[0]][s[1]]==false){
                v[s[0]][s[1]]=true;
                back(ans,c+1,s,t,v);
                // v[s[0]][s[1]]=false;  
            }
            s[0]-=d[i][0];
            s[1]-=d[i][1];
        }
    }
    bool canReach(vector<int>& s, vector<int>& t) {
        bool ans=false;
        vector<vector<int>> v(8,vector<int>(8,false));
        v[s[0]][s[1]]=true;
        back(ans,0,s,t,v);
        return ans;
    }
};
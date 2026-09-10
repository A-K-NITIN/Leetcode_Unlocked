class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(in.begin(),in.end());
        int n=in.size();
        for(int i=0;i<n;i++){
            if(in[i][0]==-1)
                continue;
            for(int j=i+1;j<n;j++){
                if(in[j][0]==-1)
                    continue;
                if(in[i][0]<=in[j][0]&&in[i][1]>=in[j][0]&&in[i][1]>=in[j][1])
                    in[j][0]=-1;
                else if(in[i][0]<=in[j][0]&&in[i][1]>=in[j][0]&&in[i][1]<in[j][1]){
                         in[j][0]=-1;
                         in[i][1]=in[j][1];
                }
                else if(in[i][1]<in[j][0])
                  break;
            }
            ans.push_back({in[i][0],in[i][1]});
        }
        return ans;
    }
};
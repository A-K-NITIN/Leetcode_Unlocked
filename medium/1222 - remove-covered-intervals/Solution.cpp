class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int n=in.size();
        int c=n;
        for(int i=0;i<n;i++){
            if(in[i][0]==-1)
                    continue;
            for(int j=i+1;j<n;j++){
                if(in[j][0]==-1)
                    continue;
                if(in[i][1]<=in[j][0])
                    break;
                if(in[i][0]<=in[j][0]&&in[i][1]>=in[j][1]){
                    c--;
                    in[j][0]=-1;
                }
                if(in[i][0]==in[j][0]&&in[i][1]<=in[j][1]){
                    c--;
                    in[i][0]=-1;
                    break;
                }   
            
            }
        }
        return c;
    }
};
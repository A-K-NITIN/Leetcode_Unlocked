class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mpr,mpc;
        
        int n=grid.size();
        for(int i=0;i<n;i++){
            mpr[grid[i]]++;
            vector<int> tem;
            for(int j=0;j<n;j++){
                tem.push_back(grid[j][i]);
            }
            mpc[tem]++;
        }
        int ans=0;
        for(auto [i,j]:mpr){
            ans+=mpc[i]*j;
        }
        return ans;
    }
};
// Pushed: 2026-09-16 03:52:08 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 73.6 MB

class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& r, vector<int>& c) {
        int k;
        vector<vector<int>> tem(n,vector<int>(n));
        for(int i=0;i<n;++i){
            k=r[i];
            for(int j=0;j<n;++j)tem[i][j]=grid[i][(j+k)%n];
        }
          for(int i=0;i<n;++i){
            k=c[i];
            for(int j=0;j<n;++j)grid[j][i]=tem[(j+k)%n][i];
        }
        return grid;
    }
};
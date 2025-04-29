class Solution {
public:
    void dfs(vector<vector<char>>& grid,unsigned short int i,unsigned short int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0')
           return;
        grid[i][j]='0';
        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        unsigned short int n=0;
        for(unsigned short int i=0;i<grid.size();i++){
            for(unsigned short int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    n++;
                    dfs(grid,i,j);
                }
            }
        }
        return n;
    }
};
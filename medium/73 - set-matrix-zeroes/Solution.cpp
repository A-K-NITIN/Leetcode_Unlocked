class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> cord;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(matrix[i][j]==0)
                    cord.push_back({i,j});
            }
        }
        for(auto k:cord){
            for(int j=0;j<m;++j)matrix[k.first][j]=0;
            for(int i=0;i<n;++i) matrix[i][k.second]=0;
        }
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i=0,j=0,n=matrix.size()-1,m=matrix[0].size()-1;
        vector<int> ans;
        while(i<=n&&j<=m){
           
            for(int k=j;k<=m;++k)ans.push_back(matrix[i][k]);
            ++i;
            if(!(i<=n&&j<=m))
                break;
            for(int k=i;k<=n;++k)ans.push_back(matrix[k][m]);
           --m;
             if(!(i<=n&&j<=m))
                break;
            for(int k=m;k>=j;--k)ans.push_back(matrix[n][k]);
           --n;
            if(!(i<=n&&j<=m))
                break;
            for(int k=n;k>=i;--k)ans.push_back(matrix[k][j]);
            ++j;

        }
        return ans;
    }
};
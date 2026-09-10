class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(auto a :sources)ans[a[0]][a[1]]=a[2];
        queue<vector<int>> nzero;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==0)
                    nzero.push({i,j});
            }
        }
        
        while(!nzero.empty()){
            int i=nzero.front()[0],j=nzero.front()[1];
            nzero.pop();
                int max=0;
                if(i-1>=0&&ans[i-1][j]>max)
                    max=ans[i-1][j];
                if(i+1<n&&ans[i+1][j]>max)
                    max=ans[i+1][j];
                if(j-1>=0&&ans[i][j-1]>max)
                    max=ans[i][j-1];
                if(j+1<m&&ans[i][j+1]>max)
                    max=ans[i][j+1];
            if(max!=0){
                ans[i][j]=max;
                if(i-1>=0&&ans[i-1][j]==0)
                    nzero.push({i-1,j});
                if(i+1<n&&ans[i+1][j]==0)
                    nzero.push({i+1,j});
                if(j-1>=0&&ans[i][j-1]==0)
                    nzero.push({i,j-1});
                if(j+1<m&&ans[i][j+1]==0)
                    nzero.push({i,j+1});
            }
               
            else
                nzero.push({i,j});
        }
       return ans; 
    }
};
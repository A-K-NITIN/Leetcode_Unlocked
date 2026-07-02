class Solution {
public:
    vector<vector<int>> d={{0,1},{0,-1},{1,0},{-1,0}};
    void back(int i,int j,int& m,int& n,vector<vector<int>>& grid,int h,bool& f){
        h-=grid[i][j];
        if(h<=0)
            return;
        if(i==m-1&&j==n-1)
            f=true;
        if(f==true){
            for(auto a:grid){
                for(auto q:a){
                    cout<<q<<" ";
                }
                cout<<"\n";
            }
            return;
        }
        int tem=grid[i][j];
        grid[i][j]=-1;
        for(int s=0;s<4;s++){
            int di=i+d[s][0];
            int dj=j+d[s][1];
            if(di<0||di>=m||dj<0||dj>=n||grid[di][dj]==-1)
                continue;
            back(di,dj,m,n,grid,h,f);
        }
        grid[i][j]=tem;
    }
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m=grid.size(),n=grid[0].size();
        bool f=false;
        back(0,0,m,n,grid,health,f);
        return f;
    }
};
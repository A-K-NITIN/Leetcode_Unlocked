class Solution {
public:
    void back1(int i,int j, vector<int>& t,vector<vector<bool>>& vis, int& m,int c){
        
        if(abs(i-t[0])==abs(t[1]-j)){
            m=min(m,c);
           
            return;
        }
        for(int k=8;k>=1;--k){
            if(i-k>0&&j+k<8&&vis[i-k][j+k]==false){
                vis[i-k][j+k]=true;
                back1(i-k,j+k,t,vis,m,c+1);
                //vis[i-k][j+k]=false;   
            }
            // else if(i+k<8&&j-k>0&&vis[i+k][j-k]==false){
            //     vis[i+k][j-k]=true;
            //     back(i+k,j-k,t,vis,m,c+1);
            //     //vis[i+k][j-k]=false;   
            // }
            // else if(i+k<8&&j+k<8&&vis[i+k][j+k]==false){
            //     vis[i+k][j+k]=true;
            //     back(i+k,j+k,t,vis,m,c+1);
            //     //vis[i+k][j+k]=false;   
            // }
            else if(i-k>0&&j-k>0&&vis[i-k][j-k]==false){
                vis[i-k][j-k]=true;
                back1(i-k,j-k,t,vis,m,c+1);
                //vis[i-k][j-k]=false;   
            }
        }
    }
    void back2(int i,int j, vector<int>& t,vector<vector<bool>>& vis, int& m,int c){
        
        if(abs(i-t[0])==abs(t[1]-j)){
            m=min(m,c);
           
            return;
        }
        for(int k=8;k>=1;--k){
            // if(i-k>0&&j+k<8&&vis[i-k][j+k]==false){
            //     vis[i-k][j+k]=true;
            //     back(i-k,j+k,t,vis,m,c+1);
            //     //vis[i-k][j+k]=false;   
            // }
            if(i+k<8&&j-k>0&&vis[i+k][j-k]==false){
                vis[i+k][j-k]=true;
                back2(i+k,j-k,t,vis,m,c+1);
                //vis[i+k][j-k]=false;   
            }
            else if(i+k<8&&j+k<8&&vis[i+k][j+k]==false){
                vis[i+k][j+k]=true;
                back2(i+k,j+k,t,vis,m,c+1);
                //vis[i+k][j+k]=false;   
            }
            // else if(i-k>0&&j-k>0&&vis[i-k][j-k]==false){
            //     vis[i-k][j-k]=true;
            //     back(i-k,j-k,t,vis,m,c+1);
            //     //vis[i-k][j-k]=false;   
            // }
        }
    }
    int minBishopMoves(vector<int>& s, vector<int>& t) {
        vector<vector<bool>>vis(8,vector<bool>(8,false));
        --s[0];
        --s[1];
        --t[0];
        --t[1];
        int m=INT_MAX;
        vis[s[0]][s[1]]=true;
        vis[t[0]][t[1]]=true;
        back1(s[0],s[1],t,vis,m,1);
        vis= vector<vector<bool>>(8,vector<bool>(8,false));
        vis[s[0]][s[1]]=true;
        vis[t[0]][t[1]]=true;
        back2(s[0],s[1],t,vis,m,1);
        
        return ((m==INT_MAX)?-1:m);
    }
};
class Solution {
public:
    int crow[4]={-1,1,0,0};
    int ccol[4]={0,0,-1,1};
    bool f=false;
    void backtrack(int index,int row,int col,int n,int m,string &s,vector<vector<char>>& board){           
        
        
        if(index==s.size()){
            
            f=true;
            return;
        }
        for(int d=0;d<4;d++){
            int c_row=row+crow[d];
            int c_col=col+ccol[d];
            
            if(c_row>=0&&c_col>=0&&c_row<n&&c_col<m&&board[c_row][c_col]==s[index] ){
                board[c_row][c_col]='#';
                backtrack(index+1,c_row,c_col,n,m,s,board);
                board[c_row][c_col]=s[index];
            }

        }


    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    
                    if(board[i][j]==word[0]&&f==false){
                     board[i][j]='#';
                     backtrack(1,i,j,n,m,word,board);
                     board[i][j]=word[0];
                    }
                }
            }
        return f;
    }
};
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.')
                    continue;
                for(int k=j+1;k<n;k++){
                    if(board[i][j]==board[i][k])
                        return false;
                }
                for(int k=i+1;k<n;k++){
                    if(board[i][j]==board[k][j])
                        return false;
                }
                for(int a=0;a<3;a++){
                    for(int b=0;b<3;b++){
                        if(board[i][j]==board[(i/3)*3+a][(j/3)*3+b]&&!(i==(i/3)*3+a&&j==(j/3)*3+b)){

                             return false;
                        }
                            
                        
                    }
                }
            }

        }
        return true;
    }
};
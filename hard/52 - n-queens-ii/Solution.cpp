class Solution {
public:
 int count =0;
bool isSafe(vector<vector<bool>>&board,int row,int col,int n){
        for(int i=row-1;i>=0;i--)
            if(board[i][col]==true)
                return false;  
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
            if(board[i][j]==true)
                return false;
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++)
            if(board[i][j]==true)
                return false;
        return true;
    }

    void backtrack(vector<vector<bool>> &board,int row,int n){
        if(row==n){
            count++;
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(board,row,col,n)){
                board[row][col]=true;
                backtrack(board,row+1,n);
                board[row][col]=false;
            }
        }
    }

    int totalNQueens(int n) {
        vector<vector<bool>>board(n,vector<bool>(n,0));
        backtrack(board,0,n);
        return count;
    }
};

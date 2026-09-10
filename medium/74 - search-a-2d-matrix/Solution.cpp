class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int s=0,e=matrix.size()-1;
        while(s<e){
            int mid=s+(e-s+1)/2;
            if(matrix[mid][0]<t)
                s=mid;
            else if(matrix[mid][0]>t)
                e=mid-1;
            else
                return true;
        }
        int i=s;
        s=0,e=matrix[0].size()-1;
        while(s<=e){
            int mid=s+(e-s+1)/2;
            if(matrix[i][mid]<t)
                s=mid+1;
            else if(matrix[i][mid]>t)
                e=mid-1;
            else
                return true;
        }
        return false;
    }
};
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    for( unsigned short int i=0;i<matrixSize;i++){
        for(unsigned short int j=0;j<*matrixColSize;j++){
             if(matrix[i][j]==target)
            return 1;
            else if(matrix[i][j]>target)
             return 0;
        }
    }
    return 0;
}
class Solution {
public:
    int uniquePaths(int m, int n) {
        int matrix[100][100] = {0};
        matrix[0][0] = 1;
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (i > 0){
                    matrix[i][j] += matrix[i - 1][j];
                }
                if (j > 0){
                    matrix[i][j] += matrix[i][j - 1];
                }
            }
        } 
        
        return matrix[m - 1][n - 1];
    }
};
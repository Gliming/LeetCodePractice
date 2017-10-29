class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int rs[100][100] = {0};
        rs[0][0] = 1;
        
        if (m <=0) return 0;
        int n = obstacleGrid[0].size();
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (obstacleGrid[i][j] == 0){
                    if (i > 0){
                        rs[i][j] += rs[i - 1][j];
                    }
                    if (j > 0){
                        rs[i][j] += rs[i][j - 1];
                    }
                }
                else{
                    rs[i][j] = 0;
                }
            }
        }
        
        return rs[m - 1][n - 1];
    }
};
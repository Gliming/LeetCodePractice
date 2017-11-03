class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        if (m <= 0) return 0;
        int n = grid[0].size();
        if (n <= 0) return 0;
        
        vector<int> miniSum;
        miniSum.push_back(grid[0][0]);
        
        for (int j = 1; j < n; j++){
            miniSum.push_back(grid[0][j] + miniSum[j - 1]);
        }
        
        for (int i = 1; i < m; i++){
            for (int j = 0; j < n; j++){
                miniSum[j] = grid[i][j] + miniSum[j];
                if (j > 0){
                    miniSum[j] = min(miniSum[j], miniSum[j - 1] + grid[i][j]);
                }
            }
        }
        return miniSum[n - 1];
    }
};
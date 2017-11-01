class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if (triangle.size() <= 0 || triangle[0].size() <= 0) return 0;
        vector<int> miniSum;
        miniSum.push_back(triangle[0][0]);
        for (int i = 1; i < triangle.size(); i++){
            miniSum.push_back(miniSum[i - 1] + triangle[i][i]);
            for (int j = i - 1; j > 0; j--)
            {
                miniSum[j] = min(miniSum[j] + triangle[i][j], miniSum[j - 1] + triangle[i][j]);
            }
            miniSum[0] = miniSum[0] + triangle[i][0];
        }
        
        int minVal = INT_MAX;
        for (int i = 0; i < miniSum.size(); i++){
            if (minVal > miniSum[i]){
                minVal = miniSum[i];
            }
        }
        return minVal;
    }
};
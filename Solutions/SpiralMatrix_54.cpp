class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> rs;
        int m = matrix.size();
        if (m <= 0){
            return rs;
        }
        
        int n = matrix[0].size();
        if (n <= 0){
            return rs;
        }
        
        int RowStart = 0;
        int ColumnStart = 0;
        int RowEnd = m - 1;
        int ColumnEnd = n - 1;

        while(RowStart <= RowEnd && ColumnStart <= ColumnEnd){
            if (RowStart <= RowEnd){
                for (int j = ColumnStart; j <= ColumnEnd; j++){
                    rs.push_back(matrix[RowStart][j]);
                }
            }
            
            RowStart++;
            if (ColumnStart <= ColumnEnd){
                for (int i = RowStart; i <= RowEnd; i++){
                    rs.push_back(matrix[i][ColumnEnd]);
                }
            }
            
            ColumnEnd--;
            if (RowStart <= RowEnd){
                for (int j = ColumnEnd; j >= ColumnStart; j--){
                    rs.push_back(matrix[RowEnd][j]);
                }
            }
            
            RowEnd--;
            if (ColumnStart <= ColumnEnd){
                for (int i = RowEnd; i >= RowStart; i--){
                    rs.push_back(matrix[i][ColumnStart]);
                }
            }
            
            ColumnStart++;
        }
        
        return rs;
    }
};
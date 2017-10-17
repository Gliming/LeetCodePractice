class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> square;
        vector<int>* array;
        for (int i = 0; i < n; i++){
            array = new vector<int>;
            for (int j = 0; j < n; j++){
                array->push_back(0);
            }
            square.push_back(*array);
        }
        
        int RowStart = 0;
        int ColumnStart = 0;
        int RowEnd = n - 1;
        int ColumnEnd = n - 1;
        
        int num = 1;
        while(RowStart <= RowEnd && ColumnStart <= ColumnEnd){
            for (int j = ColumnStart; j <= ColumnEnd; j++){
                square[RowStart][j] = num;
                num++;
            }
            
            RowStart++;
            for (int i = RowStart; i <= RowEnd; i++){
                square[i][ColumnEnd] = num;
                num++;
            }
            
            ColumnEnd--;
            for (int j = ColumnEnd; j >= ColumnStart; j--){
                square[RowEnd][j] = num;
                num++;
            }
            
            RowEnd--;
            for (int i = RowEnd; i >= RowStart; i--){
                square[i][ColumnStart] = num;
                num++;
            }
            
            ColumnStart++;
        }
        
        return square;
    }
};
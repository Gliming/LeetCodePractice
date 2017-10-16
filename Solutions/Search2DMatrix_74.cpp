class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() <= 0 || matrix[0].size() <= 0) return false;
        int m = matrix.size();
        int n = matrix[0].size();
        
        int midVal;
        int mid;
        int start = 0;
        int end = m * n - 1;
        while(start < end){
            mid = (start + end) / 2;
            midVal = matrix[mid / n][mid % n];
            if (midVal == target){
                return true;
            }
            else if (midVal > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
        if (matrix[start / n][start % n] == target){
            return true;
        }
        
        return false;
    }
};
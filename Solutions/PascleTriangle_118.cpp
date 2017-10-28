class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rs;
        if (numRows <= 0){
            return rs;
        }
        
        vector<int>* rowRs;
        rowRs = new vector<int>();
        rowRs->push_back(1);
        rs.push_back(*rowRs);
        
        for (int i = 1; i < numRows; i++){
            rowRs = new vector<int>();
            rowRs->push_back(1);
            for (int j = 1; j < i; j++){
                rowRs->push_back(rs[i - 1][j - 1] + rs[i - 1][j]);
            }
            rowRs->push_back(1);
            rs.push_back(*rowRs);
        }
        
        return rs;
    }
};
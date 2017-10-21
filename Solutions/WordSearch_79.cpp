class Solution {
public:
    bool checkAdjacent(vector<vector<int>>& mark, vector<vector<char>>& board, string& word, int i, int j, int k){
        if (k >= word.size()) return true;
        mark[i][j] = 1;
        
        if (j > 0 && mark[i][j - 1] == 0 && board[i][j - 1] == word[k] &&
            checkAdjacent(mark, board, word, i, j - 1, k + 1)){
            return true; 
        }

        if (j < board[0].size() - 1 && mark[i][j + 1] == 0 && board[i][j + 1] == word[k] &&
            checkAdjacent(mark, board, word, i, j + 1, k + 1)){
            return true;
        }
        
        if (i > 0 && mark[i - 1][j] == 0 && board[i - 1][j] == word[k] &&
            checkAdjacent(mark, board, word, i - 1, j, k + 1)){
            return true;
        }
        
        if (i < board.size() - 1  && mark[i + 1][j] == 0 && board[i + 1][j] == word[k] &&
            checkAdjacent(mark, board, word, i + 1, j, k + 1)){
            return true;
        }
        
        mark[i][j] = 0;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        if (word.size() == 0) return true;
        
        int m = board.size();
        if (m <= 0) return false;
        int n = board[0].size();
        
        vector<vector<int>> mark;
        vector<int>* tmp;
        for (int i = 0; i < m; i++){
            tmp = new vector<int>();
            for (int j = 0; j < n; j++){
                tmp->push_back(0);
            }
            mark.push_back(*tmp);
        }
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (board[i][j] == word[0] &&
                    checkAdjacent(mark, board, word, i, j, 1)){
                    return true;
                }
            }
        }
        
        return false;
    }
};
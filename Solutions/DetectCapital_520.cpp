class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() <= 1) return true;
        if (word[0] >= 'A' && word[0] <= 'Z'){
            int lower = 0;
            int upper = 0;
            for (int i = 1; i < word.size(); i++){
                if (word[i] >= 'a' && word[i] <= 'z'){
                    lower++;
                }
                else if (word[i] >= 'A' && word[i] <= 'Z'){
                    upper++;
                }
                else{
                    return false;
                }
            }

            if (lower == 0 || upper == 0){
                return true;
            }
            
            return false;
        }
        else if (word[0] >= 'a' && word[0] <= 'z'){
            for (int i = 1; i < word.size(); i++){
                if (word[i] < 'a' || word[i] > 'z'){
                    return false;
                }
            }
            return true;
        }
        else{
            return false;
        }
    }
};
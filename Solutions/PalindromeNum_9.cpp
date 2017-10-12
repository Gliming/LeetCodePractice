class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int len = str.size();
        for (int i = 0; i < len; i++){
            if (i < len - i - 1){
                if (str[i] != str[len - i -1]){
                    return false;
                }
            }
            else{
                break;
            }
        }
        return true;
    }
};
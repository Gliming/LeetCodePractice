class Solution {
public:
    int FindPos(string& str, char c){
        for (int j = 0; j < str.size(); j++){
            if (str[j] == c){
                return j;
            }
        }
        return -1;
    }
    
    int lengthOfLongestSubstring(string s) {
        string str = "";
        int maxCount = 0;
        int tmpPos;
        
        for (int i = 0; i < s.size(); i++){
            tmpPos = FindPos(str, s[i]);
            if (tmpPos == -1){
                str += s[i];
            }
            else{
                str = str.substr(tmpPos + 1) + s[i];
            }
            if (str.size() > maxCount){
                maxCount = str.size();
            }
        }
        return maxCount;
    }
};
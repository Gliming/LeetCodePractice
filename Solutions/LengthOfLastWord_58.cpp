class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 0){
            return 0;
        }
        
        int index = s.size() - 1;
        while(index >= 0 && s[index] == ' '){
            index--;
        }
        
        int len = 0;
        if (index >= 0){
            for (int i = index; i >= 0; i--)
            {  
                if (s[i] == ' '){
                    break;
                }
                len++;
            }    
        }
        return len;
    }
};
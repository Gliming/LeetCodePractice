class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 0) return "";
        if (s.size() == 1) return s;
        int len = s.size();
        int k, j;
        int maxLen = 0;
        int tmpLen;
        string result = "";
        
        for (int i = 0; i < len;){
            k = i; j = i;
            while (k < len - 1 && s[k] == s[k + 1]) k++;
            i = k + 1;
            while(j > 0 && k < len - 1 && s[j] == s[k]){
                j--;
                k++;
            }
            if (s[j] != s[k]){
				j++;
				k--;
			}
            tmpLen = k - j + 1;
            if (tmpLen > maxLen){
                maxLen = tmpLen;
                result = s.substr(j, k - j + 1);
            }
        }
        return result;
    }
};
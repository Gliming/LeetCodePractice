class Solution {
public:
    string addBinary(string a, string b) {
        int len = min(a.size(), b.size());
        int lenb = b.size();
        int lena = a.size();
        
        string rs = "";
        int digit = 0;
        int tmpRs;
        for (int i = 1; i <= len; i++){
            tmpRs = (a[lena - i] - 48) + (b[lenb - i] - 48) + digit;
            digit = tmpRs / 2;
            tmpRs = tmpRs % 2; 
            rs = to_string(tmpRs) + rs;
        }
        
        if (b.size() > a.size()){
            for (int i = len + 1; i <= lenb; i++){
                tmpRs = (b[lenb - i] - 48) + digit;
                digit = tmpRs / 2;
                tmpRs = tmpRs % 2;
                rs = to_string(tmpRs) + rs;
            }
        }
        else if (a.size() > b.size()){
            for (int i = len + 1; i <= lena; i++){
                tmpRs = (a[lena - i] - 48) + digit;
                digit = tmpRs / 2;
                tmpRs = tmpRs % 2;
                rs = to_string(tmpRs) + rs;
            }
        }
        
        if (digit == 1){
            rs = "1" + rs;
        }
        return rs;
    }
};
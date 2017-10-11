class Solution {
public:
    string countAndSay(int n) {
        if (n == 1){
            return "1";
        }
        
        string str = "1";
        string tmpStr = "";
        int len;
        int times;
        
        for (int i = 1; i < n; i++){
            len = str.size();
            if (len == 1){
                tmpStr = "1" + str;
                str = tmpStr;
                continue;
            }
            
            tmpStr = "";
            times = 1;
            for (int j = 1; j < str.size(); j++){
                if (str[j] == str[j - 1]){
                    times++;
                }
                else{
                    tmpStr += to_string(times);
                    tmpStr += str[j - 1];
                    times = 1;
                }
            }
            tmpStr += to_string(times);
            tmpStr += str[len - 1];
            
            str = tmpStr;
        }
        return str;
    }
};
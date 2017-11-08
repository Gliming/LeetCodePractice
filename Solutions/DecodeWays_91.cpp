class Solution {
public:
    int numDecodings(string s) {
        vector<int> rs;
        rs.push_back(1);
        int len = s.size();
        if (len <= 0) return 0;
        
        int tmp;
        for (int i = 0; i < len; i++){
            tmp = 0;
            if (s[i] != '0'){
                tmp += rs[i];
            }
            
            if (i > 0 && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6'))){
                tmp += rs[i - 1];
            }
            rs.push_back(tmp);
        }
        return rs[len];
    }
};
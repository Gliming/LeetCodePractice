class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
                sk.push(s[i]);
            }
            else{
                if (!sk.empty() && abs(sk.top() - s[i]) <= 2){
                    sk.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if (sk.empty()){
            return true;
        }
        
        return false;
    }
};
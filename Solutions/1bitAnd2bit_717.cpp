class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int len = bits.size();
        if (len <= 0) return false;
        if (len == 1){
            return bits[0] == 0;
        }
        for (int i = 0; i < len;){
            if (bits[i] == 0){
                i++;
            }
            else{
                i+=2;
            }
            
            if (i == len - 1 && bits[i] == 0){
                return true;
            }
        }
        return false;
    }
};
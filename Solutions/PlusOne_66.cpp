class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(i >= 0 && digits[i] + 1>= 10){
            digits[i] = (digits[i] + 1) % 10;
            i--;
        }
        
        if (i < 0){
            digits.push_back(0);
            for (int i = digits.size() - 1; i >= 1; i--){
                digits[i] = digits[i - 1];
            }
            digits[0] = 1;
        }
        else{
            digits[i]++;
        }
        
        return digits;
    }
};
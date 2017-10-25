class Solution {
public:
    int findNthDigit(int n) {
        int digit = 1;
        long baseNum = 9;
        while(n - digit * baseNum > 0){
            n -= digit * baseNum;
            digit++;
            baseNum *= 10;
        }

        int finalBaseNum = baseNum / 9;
        
        int i = (n - 1) / digit;
        int j = (n - 1) % digit;
        
        finalBaseNum += i;
        string str = to_string(finalBaseNum);
        return (str[j] - 48);
    }
};
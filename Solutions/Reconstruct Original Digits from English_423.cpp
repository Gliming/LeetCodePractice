class Solution {
public:
    string originalDigits(string s) {
        int i, j;
        string result = "";
        int a[10] = {0};
        for (i = 0; i < s.size(); i++){
            if (s[i] == 'z') a[0]++;
            if (s[i] == 'n') a[1]++;
            if (s[i] == 'w') a[2]++;
            if (s[i] == 'h') a[3]++;
            if (s[i] == 'u') a[4]++;
            if (s[i] == 'f') a[5]++;
            if (s[i] == 'x') a[6]++;
            if (s[i] == 's') a[7]++;
            if (s[i] == 'g') a[8]++;
            if (s[i] == 'i') a[9]++;
        }
        a[3] = a[3] - a[8];
        a[5] = a[5] - a[4];
        a[7] = a[7] - a[6];
        a[9] = a[9] - a[5] - a[6] - a[8];
        a[1] = a[1] - a[7] - 2 * a[9];
        for (i = 0; i < 10; i++){
            if (a[i] > 0){
                for (j = 0; j < a[i]; j++){
                    result += to_string(i);
                }
            }
        }
        return result;
    }
};
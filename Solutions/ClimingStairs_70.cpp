class Solution {
public:
    int climbStairs(int n) {
        vector<int> rs;
        rs.push_back(1);
        rs.push_back(1);
        for (int i = 2; i <= n; i++){
            rs.push_back(rs[i - 1] + rs[i - 2]);
        }
        return rs[n];
    }
};
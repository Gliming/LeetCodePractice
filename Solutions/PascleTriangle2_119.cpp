class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rs = nums[0];
        for (int i = 1; i < nums.size(); i++){
            rs ^= nums[i];
        }
        return rs;
    }
};
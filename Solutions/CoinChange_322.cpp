class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> nums;
        nums.push_back(0);
        for (int i = 1; i <= amount; i++){
            int num = -1;
            for (int j = 0; j < coins.size(); j++){
                if (i - coins[j] >= 0 && nums[i - coins[j]] != -1 && (num == -1 || nums[i - coins[j]] + 1 < num)){
                    num = nums[i - coins[j]] + 1;
                }
            }
            nums.push_back(num);
        }
        
        return nums[amount];
    }
};
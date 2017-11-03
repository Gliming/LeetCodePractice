class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maximun = 0;
        int len = nums.size();
        for (int i = 0; i < len; i++){
            if (maximun >= i){
                maximun = max(maximun, i + nums[i]);
            }
        }
        
        return maximun >= (len - 1);
    }
};
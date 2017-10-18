class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colorBucket[3] = {0};
        int len = nums.size();
        for (int i = 0; i < len; i++){
            colorBucket[nums[i]]++;
        }
        nums.clear();
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < colorBucket[i]; j++){
                nums.push_back(i);
            }
        }
    }
};
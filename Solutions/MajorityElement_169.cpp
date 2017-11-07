class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums[0];
        int len = nums.size();
        int count = 1;
        for (int i = 1; i < len; i++)
        {
            if (count == 0){
                major = nums[i];
                count = 1;
            }
            else if (major == nums[i]){
                count++;
            } 
            else{
                count--;
            }
        }
        return major;
    }
};
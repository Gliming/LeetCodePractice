class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        while(start < end){
            mid = (start + end) / 2;
            if (nums[mid] == target){
                return mid;
            }
            if (nums[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        if (target > nums[start]) return start + 1;
        else return start;
    }
};
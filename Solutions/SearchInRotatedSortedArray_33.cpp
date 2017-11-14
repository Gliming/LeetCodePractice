class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() <= 0) return -1;
        int lo = 0;
        int hi = nums.size() - 1;
        int m;
        
        if (nums[hi] > nums[lo]){
            while(lo <= hi){
                m = (lo + hi) / 2;
                if (nums[m] == target){
                    return m;    
                }
                
                if (nums[m] < target){
                    lo = m + 1;
                }
                else{
                    hi = m - 1;
                }
            }
            return -1;
        }
        
        while(lo < hi){
            m = (lo + hi) / 2;
            if (nums[m] <= nums[lo]){
                hi = m;
            }
            else{
                lo = m;
            }
        }
        
        int sep = lo;
        if (target >= nums[0]){
            lo = 0;
            while(lo <= sep){
                m = (lo + sep) / 2;
                if (nums[m] == target){
                    return m;    
                }
                
                if (nums[m] < target){
                    lo = m + 1;
                }
                else{
                    sep = m - 1;
                }
            }
        }
        else{
            hi = nums.size() - 1;
            sep++;
            while(sep <= hi){
                m = (sep + hi) / 2;
                if (nums[m] == target){
                    return m;
                }
                
                if (nums[m] < target){
                    sep = m + 1;
                }
                else{
                    hi = m - 1;
                }
            }
        }
        return -1;
    }
};
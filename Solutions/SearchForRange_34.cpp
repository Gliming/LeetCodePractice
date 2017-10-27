class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> range;
        range.push_back(-1);
        range.push_back(-1);
        if (nums.size() <= 0){
            return range;
        }
        
        int e = nums.size() - 1;
        int s = 0;
        int m = 0;
        
        while(s <= e){
            m = (s + e) / 2;
            if (nums[m] < target){
                s = m + 1;
            }
            else if (nums[m] > target){
                e = m - 1;
            }
            else{
                break;
            }
        }
        
        if (s > e){
            return range;
        }
        
        int t = m;
        int sm = s;
        while(s <= t){
            sm = (t + s) / 2;
            if (nums[sm] == target){
                t = sm - 1;
            }
            else{
                s = sm + 1;
            }
        }
        
        int em = e;
        while(m <= e){
            em = (m + e) / 2;
            if (nums[em] == target){
                m = em + 1;
            }
            else{
                e = em - 1;
            }
        }
        
        range[0] = s;
        range[1] = e;
        return range;
    }
};
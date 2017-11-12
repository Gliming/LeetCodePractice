class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int len = nums.size();
        int subSetLen = pow(2, len);
        vector<vector<int>> subSetVec(subSetLen, vector<int>());
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < subSetLen; j++){
                if ((j >> i) & 1){
                    subSetVec[j].push_back(nums[i]);
                }
            }
        }
        return subSetVec;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructBST(vector<int>& nums, int start, int end){
        if (start > end) return NULL;
        int mid = (start + end) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = constructBST(nums, start, mid - 1);
        node->right = constructBST(nums, mid + 1, end);
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() <= 0) return NULL;
        return constructBST(nums, 0, nums.size() - 1);
    }
};
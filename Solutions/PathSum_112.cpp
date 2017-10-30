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
    bool checkPathSum(TreeNode* root, int sum){
        if (root == NULL){
            return false;
        }
        
        if (root->left == NULL && root->right == NULL){
            if (sum == root->val){
                return true;
            }
            else{
                return false;
            }
        }
        
        return checkPathSum(root->left, sum - root->val) || checkPathSum(root->right, sum - root->val);
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL){
            return false;
        }
        
        return checkPathSum(root, sum);
    }
};
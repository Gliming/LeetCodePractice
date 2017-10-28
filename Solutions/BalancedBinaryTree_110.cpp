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
    int isBalancedTree(TreeNode* node){
        if (node == NULL){
            return 0;    
        }
        
        int lTreeHeight = isBalancedTree(node->left);
        int rTreeHeight = isBalancedTree(node->right);
        if (lTreeHeight < 0 || rTreeHeight < 0){
            return -1;
        }
        
        if (abs(lTreeHeight - rTreeHeight) <= 1){
            return max(lTreeHeight, rTreeHeight) + 1;
        }
        
        return -1;
    }
    
    bool isBalanced(TreeNode* root) {
        if (isBalancedTree(root) < 0){
            return false;
        }
        
        return true;
    }
};
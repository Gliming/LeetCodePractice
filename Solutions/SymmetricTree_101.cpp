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
    bool SymmetricCompare(TreeNode* left, TreeNode* right){
        if (left == NULL && right == NULL){
            return true;
        }
        else if (left == NULL || right == NULL){
            return false;
        }
        
        if (left->val != right->val){
            return false;
        }
        
        return SymmetricCompare(left->left, right->right) && SymmetricCompare(left->right, right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return SymmetricCompare(root->left, root->right);
    }
};
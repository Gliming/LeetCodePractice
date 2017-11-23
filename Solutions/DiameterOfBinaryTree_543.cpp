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
    void traverseTree(TreeNode* node, int& maxVal){
        if (node == NULL){
            return;
        }
        
        traverseTree(node->left, maxVal);
        if (node->val > maxVal){
            maxVal = node->val;
        }
        traverseTree(node->right, maxVal);
    }
    
    int calDiameter(TreeNode* node){
        if (node == NULL){
            return 0;
        }
        
        int leftLen = calDiameter(node->left);
        int rightLen = calDiameter(node->right);
        node->val = leftLen + rightLen;
        if (leftLen > rightLen){
            return leftLen + 1;
        }
        else{
            return rightLen + 1;
        }
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        int maxVal = 0;
        calDiameter(root);
        traverseTree(root, maxVal);
        return maxVal;
    }
};
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
    void inorder(vector<int>& rs, TreeNode* node){
        if (node == NULL) return;
        
        inorder(rs, node->left);
        rs.push_back(node->val);
        inorder(rs, node->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> rs;
        inorder(rs, root);
        return rs;
    }
};
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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return maxNodeDepth(root);
    }
private:
    int maxNodeDepth(TreeNode* node){
        if(!node) return 0;
        return 1+max(maxNodeDepth(node->left),maxNodeDepth(node->right));
    }
};
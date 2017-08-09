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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        return pathNum(root,sum); 
    }
    
    int pathNum(TreeNode* root, int sum){
        if(!root->left&& !root->right) {
            if(root->val == sum) return 1;
            else return 0;
        }
        int leftPath = 0,rightPath =0;
        if(root->left) leftPath = pathNum(root->left,sum-root->val);
        if(root->right) rightPath = pathNum(root->right,sum-root->val);
        return leftPath +rightPath;
    }
};
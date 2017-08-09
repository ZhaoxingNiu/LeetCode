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
    bool isBalanced(TreeNode* root) {
        return bottomUpDepth(root)!=-1;
    }
private:
    int bottomUpDepth(TreeNode* root){
        if(!root)  return 0;
        int leftDepth = bottomUpDepth(root->left);
        int rightDepth  = bottomUpDepth(root->right);
        if(leftDepth ==-1 || rightDepth ==-1 || abs(leftDepth- rightDepth)>1) return -1;
        return max(leftDepth,rightDepth)+1;
    }
};
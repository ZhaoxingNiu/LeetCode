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
    int maxPathSum(TreeNode* root) {
        return max(maxVal,max2root(root));
    }
    
    int max2root(TreeNode* root) {
        if(!root) return 0;
        int leftSum = max(max2root(root->left),0);
        int rightSum = max(max2root(root->right),0);
        
        int tmpVal = leftSum+rightSum + root->val;
        if(tmpVal>maxVal)  maxVal = tmpVal;
        
        return max(leftSum,rightSum)+root->val;
    }

private:
    int maxVal = INT_MIN;
};
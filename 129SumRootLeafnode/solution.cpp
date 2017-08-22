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
    int sumNumbers(TreeNode* root) {
        sum = 0;
        if(!root) return sum;
        if(!root->left && !root->right) return root->val;
        addSum(root->left,root->val);
        addSum(root->right,root->val);
        return sum;
        
    }
private: 
    int sum;
    void addSum(TreeNode* root,int pre){
        if(!root) return;
        if(!root->left && !root->right) {
            sum += root->val+pre*10;
            return;
        }
        addSum(root->left,root->val+pre*10);
        addSum(root->right,root->val+pre*10);
    }
};
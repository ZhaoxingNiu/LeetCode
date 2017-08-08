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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty()) return NULL;
        return buildTree(inorder,postorder,0,0,inorder.size());
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder,int instart,int poststart,int num){
        if(num<=0) return NULL;
        TreeNode* newHead = new TreeNode(0);
        int leftNum = 0;
        while(inorder[leftNum+instart]!=postorder[poststart+num-1]){
            leftNum++;
        }
        newHead->val = postorder[poststart+num-1];
        newHead->left = buildTree(inorder,postorder,instart,poststart,leftNum);
        newHead->right = buildTree(inorder,postorder,instart+leftNum+1,poststart+leftNum,num-1-leftNum);
        return newHead;
        
    }
};
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()) return NULL;
        return buildTree(preorder,inorder,0,0,preorder.size());
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder,int prestart,int instart,int num){
        if(num<=0) return NULL;
        TreeNode* newHead = new TreeNode(0);
        int leftNum = 0;
        while(inorder[leftNum+instart]!=preorder[prestart]){
            leftNum++;
        }
        newHead->val = preorder[prestart];
        newHead->left = buildTree(preorder,inorder,prestart+1,instart,leftNum);
        newHead->right = buildTree(preorder,inorder,prestart+leftNum+1,instart+leftNum+1,num-1-leftNum);
        return newHead;
        
    }
};
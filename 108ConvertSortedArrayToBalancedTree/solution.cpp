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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()) return NULL;
        return buildTree(nums,0,nums.size()-1);
    }
private:
    TreeNode* buildTree(vector<int>& nums,int start,int end){
        if(start >end) return NULL;
        TreeNode *newHead = new TreeNode(0);
        int mid = (start+end)/2;
        //if(start+1==end) mid = end;
        newHead->val = nums[mid];
        newHead->left = buildTree(nums,start,mid-1);
        newHead->right = buildTree(nums,mid+1,end);
        return newHead;
    }
};
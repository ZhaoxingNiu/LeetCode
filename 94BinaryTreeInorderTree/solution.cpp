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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode *> st;
        TreeNode *pCurrent = root;
        
        while(!st.empty() || pCurrent){
            if(pCurrent){
                st.push(pCurrent);
                pCurrent = pCurrent->left;
            }else{
                TreeNode *pNode = st.top();
                res.push_back(pNode->val);
                st.pop();
                pCurrent = pNode->right;
            }
            
        }
        return res;
    }
};
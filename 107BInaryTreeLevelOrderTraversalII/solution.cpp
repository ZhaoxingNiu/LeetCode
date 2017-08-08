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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        addElement(res,root,0);
        reverse(res.begin(),res.end());
        return res;
    }
private:
    void addElement(vector<vector<int>> &res,TreeNode* node,int depth){
        if(depth == res.size()){
            res.push_back(vector<int>());
        }
        res[depth].push_back(node->val);
        if(node->left){ addElement(res,node->left,depth+1);}
        if(node->right){ addElement(res,node->right,depth+1);}
    }
};
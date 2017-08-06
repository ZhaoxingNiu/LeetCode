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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        vector<TreeNode*> layer;
        if(!root) return res;
        layer.push_back(root);
        while(layer.size()){
            res.push_back(vector<int>());
            int depth  = res.size()-1;
            vector<TreeNode*> newlayer;
            for(auto node:layer){
                res[depth].push_back(node->val);
                if(node->left) newlayer.push_back(node->left);
                if(node->right) newlayer.push_back(node->right);
            }
            if(depth%2) reverse(res[depth].begin(),res[depth].end());
            layer = newlayer;
        }
        return res;
    }
};
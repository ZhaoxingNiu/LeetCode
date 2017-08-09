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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        if(!root) return res;
        res = pathNumSub(root,sum);
        for(auto& e:res){
            reverse(e.begin(),e.end());
        }
        return res;
    }

private:
    vector<vector<int>> pathNumSub(TreeNode* root, int sum){
        vector<vector<int>> res;
        vector<vector<int>> left;
        vector<vector<int>> right;
        if(!root->left&& !root->right) {
            if(root->val == sum) {
                res.push_back(vector<int>());
                res[0].push_back(root->val);
            }
            return res;
        }
        if(root->left) left = pathNumSub(root->left,sum-root->val);
        if(root->right) right = pathNumSub(root->right,sum-root->val);
        if(left.size()){
            for(auto& e:left){
                e.push_back(root->val);
                res.push_back(e);
            }
        }
        if(right.size()){
            for(auto& e:right){
                e.push_back(root->val);
                res.push_back(e);
            }
        }
        return res;
    }
};
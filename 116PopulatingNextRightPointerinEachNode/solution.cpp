/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root) return;
        TreeLinkNode *leftSon = root;
        while(leftSon->left){
            TreeLinkNode *preLevel = leftSon;
            while(preLevel){
                preLevel->left->next = preLevel->right;
                if(preLevel->next && preLevel->next->left){
                    preLevel->right->next = preLevel->next->left;
                }
                preLevel = preLevel->next;
            }
            leftSon = leftSon->left;
        }
    }
};
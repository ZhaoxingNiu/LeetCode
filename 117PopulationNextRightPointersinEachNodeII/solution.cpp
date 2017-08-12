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
        TreeLinkNode *nextLevel =NULL;
        TreeLinkNode *nextLevelPtr =NULL;
        while(leftSon){      
            while(leftSon)
                if(leftSon->left){
                    nextLevel = leftSon->left;
                    nextLevelPtr = leftSon->left;
                    if(leftSon->right){
                        nextLevelPtr->next = leftSon->right;
                  		nextLevelPtr = nextLevelPtr->next;
                    }
                    break;
                }else if(leftSon->right){
                    nextLevel = leftSon->right;
                    nextLevelPtr = leftSon->right;
                    break;
               }else{
                    leftSon = leftSon->next;
               }
            
           if(leftSon && leftSon->next){
               leftSon = leftSon->next;
               while(leftSon){
                    if(leftSon->left){
                        nextLevelPtr->next =  leftSon->left;
                        nextLevelPtr = nextLevelPtr->next;
                    }
                    if(leftSon->right){
                        nextLevelPtr->next = leftSon->right;
                        nextLevelPtr = nextLevelPtr->next;
                    } 
                    leftSon = leftSon->next;
               }
           }
           
           leftSon = nextLevel;
           nextLevel = NULL;
        }
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        return buildBstFromList(head);
    }
private:
    TreeNode* buildBstFromList(ListNode* root){
        if(!root) return NULL;
        ListNode* p = root;
        TreeNode* mid = new TreeNode(0);
        int count  = 1;
        while(p->next){ count++; p = p->next;}
        if(count ==1){ mid->val = p->val; return mid;}
        // reset p
        p = root;
        count /= 2;
        while(--count){p = p->next;}
        ListNode* rightPart = p->next->next;
        mid->val = p->next->val;
        p->next = NULL;
            
        mid->left = buildBstFromList(root);
        mid->right = buildBstFromList(rightPart);
        return mid;
    }
};
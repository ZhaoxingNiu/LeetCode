/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode **runner = &head;
        if(!head || !head->next) return head;
        
        while(*runner){
            if((*runner)->next &&(*runner)->val ==(*runner)->next->val){
                ListNode* tmp=(*runner)->next;
                while(tmp && tmp->val == (*runner)->val) tmp = tmp->next;
                (*runner)->next = tmp;
            }
            runner = &((*runner)->next);
        }
        return head;
    }
};
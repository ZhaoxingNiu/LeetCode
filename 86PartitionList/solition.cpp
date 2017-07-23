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
    ListNode* partition(ListNode* head, int x) {
        ListNode small(0),big(0);
        ListNode* l = &small;
        ListNode* h = &big;
        if(!head || !head->next) return head;
        while(head){
            ListNode* tmp = head->next;
            head->next = NULL;
            if(head->val<x) {
                l->next = head;
                l = l->next;
            }else{
                h ->next = head;
                h = h->next;
            }
            head = tmp;
        }
        l->next = big.next;
        return small.next;
    }
};
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
    ListNode* swapPairs(ListNode* head) {
        ListNode newHead(-1);
        newHead.next = head;
        ListNode* p = &newHead;
        
        while(head&&head->next){
            ListNode *tmp = head->next;
            p->next = head->next;
            head->next = tmp->next;
            p->next->next= head;
            
            p = head;
            head = head->next;
        }
        return newHead.next;
        
    }
};
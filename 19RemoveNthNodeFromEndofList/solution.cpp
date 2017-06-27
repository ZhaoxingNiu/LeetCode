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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // add the head point
        ListNode new_head(-1);
        new_head.next = head;
        head = &new_head;
        
        if(head->next==NULL) return head;
        // count 
        ListNode* first = head;
        int count = 0;
        while(first->next !=NULL) {
            count++;
            first = first->next;
        }
        if(count <n) return head;
        int remove_index = count-n;
        int index = 0;
        ListNode* p = head;
        while(index<remove_index){
            index++;
            p = p->next;
        }
        if(p->next!=NULL && (p->next)->next!=NULL ){
            p->next = (p->next)->next;
        }else{
            p->next = NULL;
        }
        return new_head.next;
    }
};
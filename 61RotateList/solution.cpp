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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode *newH, *tail;
        newH = tail = head;
        
        int count = 1;
        while(tail->next){ tail = tail->next; count++;}
        tail->next = head;
        
        k %= count;
        k = count -k;
        while(k--){
            tail = tail->next;
        }
        newH = tail->next;
        tail->next = NULL;
        return newH;
    }
};
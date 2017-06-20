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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode p(0),*phead;
        phead = &p;
        int num = 0;
        //进位时要考虑是不是同时结束
        while(l1 || l2 || num){
            if(l1) {
                num += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                num += l2->val;
                l2 = l2->next;
            }
            phead->next = new ListNode(num%10);
            phead = phead->next;
            num = num/10;
        }
        return p.next;
    }
};
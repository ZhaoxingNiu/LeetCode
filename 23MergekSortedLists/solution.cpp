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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode t(-1);
        if(lists.size()==0) return &t;
        int n = lists.size();
        ListNode* l1 = lists[0];
        for(int i=1;i<lists.size();i++){
            l1 = mergeTwoLists(l1,lists[i]);
        }
        return l1;
    }
private:
     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode new_head(-1);
        ListNode* head = &new_head;
        while(l1&&l2) {
            if(l1->val<l2->val){
                head->next = l1;
                head = head->next;
                l1 = l1->next;
            }else{
                head->next = l2;
                head = head->next;
                l2 = l2->next;
            }
        }
        head->next = l1?l1:l2;
        return new_head.next;
    }
};
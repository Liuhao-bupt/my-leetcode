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
    ListNode* sortList(ListNode* head) {
        if (!head || !(head->next))
            return head;
        ListNode* low = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            low = low->next;
            fast = fast->next->next;
        }
        fast = low->next;
        low->next = NULL;
        return merge(sortList(fast), sortList(head));
    }
    ListNode* merge(ListNode* p1, ListNode* p2) {
        if (p1 && !p2)
            return p1;
        if (p2 && !p1)
            return p2;
        ListNode* head = NULL;
        ListNode* tail;
        while (p1 && p2) {
            if (!head){
                if (p1->val < p2->val){
                    head = p1;
                    p1 = p1->next;
                    }
                else{
                    head = p2;
                    p2 = p2->next;
                    }
                tail = head;
                }
            else {
                if (p1->val < p2->val){
                    tail->next = p1;
                    p1 = p1->next;
                }
                else{
                    tail->next = p2;
                    p2 = p2->next;                
                }
                tail = tail->next;
            }
        }
        if (p1)
            tail->next = p1;
        if (p2)
            tail->next = p2;
        return head;
    }
};

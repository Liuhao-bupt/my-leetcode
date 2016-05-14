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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        if (l1->val > l2->val){
            head = l2;
            tail = head;
            l2 = l2->next;}
        else{
            head = l1;
            tail = head;
            l1 = l1->next;}    
        while(l1 && l2){
            if (l1->val > l2->val){
                tail->next = l2;
                tail = tail->next;
                l2 = l2->next;}
            else{
                tail->next = l1;
                tail = tail->next;
                l1 = l1->next;}
        }
        tail->next = (l1 ? l1 : l2);
        return head;
    }
};

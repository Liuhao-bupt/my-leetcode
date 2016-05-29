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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head)
            return NULL;
        while(head && head->val == val)
            head = head->next;
        ListNode* pre;
        ListNode* cur = head;
        while(cur)
        {
            if (cur->val != val){
                pre = cur;
                cur = cur->next;}
            else{
                pre->next = cur->next;
                cur = pre->next;}
        }
        return head;
    }
};

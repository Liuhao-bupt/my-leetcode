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
        if(!head)
            return NULL;
        ListNode *pre;
        ListNode *cur;
        pre = cur = head;
        for(int k = 1; k <= n; ++k)
            cur = cur->next;
        if(!cur)
            return head->next;
        while(cur->next)
            cur = cur->next, pre = pre->next;
        pre->next = pre->next->next;
        return head;
    }
};

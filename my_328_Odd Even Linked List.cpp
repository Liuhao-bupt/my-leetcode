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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next || !head->next->next)
            return head;
        ListNode *odd, *even, *p, *s, *m;
        p = head->next->next;
        odd = head;
        even = head->next;
        s = head->next;
        head->next->next = NULL;
        int j = 3;
        while (p != NULL) {
            if (j % 2 != 0) {
                m = p;
                p = p->next;
                m->next = NULL;
                odd->next = m;
                m->next = s;
                odd = m;
                ++j;}
            else {
                m = p;
                p = p->next;
                m->next = NULL;
                even->next = m;
                even = m;
                ++j;
            }
        }
        return head;
    }
};

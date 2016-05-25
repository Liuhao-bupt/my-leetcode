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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)
            return NULL;
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        int len1 = 0, len2 = 0;
        while(temp1)
            ++len1, temp1 = temp1->next;
        while(temp2)
            ++len2, temp2 = temp2->next;
        ListNode *lon = (len1 > len2 ? headA : headB);
        ListNode *sma = (len1 > len2 ? headB : headA);
        int  k = 0;
        while(lon && sma)
        {
            if(k < abs(len1 - len2))
                lon = lon->next, ++k;
            else if(lon == sma)
                return lon;
            else
                lon = lon->next, sma = sma->next;
        }
        return NULL;
    }
};

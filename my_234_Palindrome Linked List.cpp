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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode* slow;
        ListNode* fast;
        slow = fast = head;
        while(fast && fast->next)
        {
         slow = slow->next;
         fast = fast->next->next;
        }
        if(fast){
            slow->next = reverseList(slow->next);
            slow = slow->next;}
        else{
            slow = reverseList(slow);}
        while(slow)
        {
            if(slow->val != head->val)
                return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
    
    ListNode* reverseList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode *p=head->next,*q;
        head->next=NULL;
        while(p){
            q=p->next;
            p->next=head;
            head=p;
            p=q;
        }
        return head;}
};

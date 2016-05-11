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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return NULL;
        ListNode *pre,*cur;
        pre=head;
        cur=head->next;
        while(cur){
            if(pre->val == cur->val){
                pre->next = cur->next;
                free(cur);
                cur = pre->next;
            }
            else{
                pre=cur;
                cur=cur->next;
            }
        }
        return head;
    }
};

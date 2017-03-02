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
        if (!l1)
            return l2;
        if (!l2)
            return l1;
        int sum = l1->val+l2->val;
        int temp = 0;
        ListNode* root = new ListNode(0);
        if (sum > 9){
            root->val = sum%10;
            temp = 1;
        }
        else
            root->val = sum;
        ListNode* p = root;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 && l2) {
            sum = l1->val+l2->val;
            sum += temp;
            ListNode* cur = new ListNode(0);
            if (sum > 9){
                cur->val = sum%10;
                temp = 1;
            }
            else{
                cur->val = sum;
                temp = 0;}
            p->next = cur;
            p = cur;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l2 && temp == 1){
            sum = l2->val;
            sum += temp;
            ListNode* cur = new ListNode(0);
            if (sum > 9){
                cur->val = sum%10;
                temp = 1;
            }
            else{
                cur->val = sum;
                temp = 0;}
            p->next = cur;
            p = cur;
            l2 = l2->next;
        }
        while (l1 && temp == 1){
            sum = l1->val;
            sum += temp;
            ListNode* cur = new ListNode(0);
            if (sum > 9){
                cur->val = sum%10;
                temp = 1;
            }
            else{
                cur->val = sum;
                temp = 0;}
            p->next = cur;
            p = cur;
            l1 = l1->next;           
        }
        if (l1 && temp == 0)
            p->next = l1;
        if (l2 && temp == 0)
            p->next = l2;
        if (!l1 && !l2 && temp == 1){
            ListNode* cur = new ListNode(1);
            p->next = cur;
        }
        return root;
    }
};

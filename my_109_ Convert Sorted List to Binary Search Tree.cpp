/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (!head)
            return NULL;
        ListNode* p = head;
        int n = 0;
        while (p) {
            p = p->next;
            ++n;
        }
        ListNode* pre = head;
        for (int i = 0; i < (n/2 - 1); i++, pre = pre->next);
        p = pre->next;
        if (p) {
            ListNode* q = p->next;
            pre->next = NULL;
            TreeNode* root = new TreeNode(p->val);
            root->left = sortedListToBST(head);
            root->right = sortedListToBST(q);
            return root;
        }
        else {
            TreeNode* root = new TreeNode(pre->val);
            root->left = NULL;
            root->right = NULL;
            return root;
        }
    }
};

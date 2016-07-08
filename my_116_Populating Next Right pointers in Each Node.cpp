/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (root) {
        TreeLinkNode *p, *last;
        p = last = root;
        queue<TreeLinkNode *> que;
        que.push(root);
        while (!que.empty()) {
            p = que.front();
            que.pop();
            if (p->left)
                que.push(p->left);
            if (p->right)
                que.push(p->right);
            if (p == last) {
                p->next = NULL;
                last = que.back();}
            else
                p->next = que.front();}
        }
    }
};

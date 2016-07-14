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
    vector<int> rightSideView(TreeNode* root) {
    vector<int> result;
    if (!root)
        return result;
    TreeNode *p, *last;
    last = root;
    queue<TreeNode*> que;
    que.push(root);
    while(!que.empty()) {
        p = que.front();
        que.pop();
        if (p->left)
            que.push(p->left);
        if (p->right)
            que.push(p->right);
        if (p == last) {
            result.push_back(p->val);
            last = que.back();
        }
    }
    return result;
    }
};

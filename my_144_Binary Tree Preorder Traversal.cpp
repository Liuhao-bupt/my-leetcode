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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* p = root;
        TreeNode* q;
        if (p) {
            s.push(p);
            while (!s.empty()) {
                q = s.top();
                s.pop();
                res.push_back(q->val);
                if (q->right)
                    s.push(q->right);
                if (q->left)
                    s.push(q->left); }
        }
        return res;
    }
};

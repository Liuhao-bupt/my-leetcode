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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode *p, *q;
        p = root;
        while(p || !s.empty()) {
            if (p) {
                s.push(p);
                p = p->left;
            }
            else {
                q = s.top();
                res.push_back(q->val);
                s.pop();
                p = q->right;
            }
        }
        return res[k-1];
    }
};

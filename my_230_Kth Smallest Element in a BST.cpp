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
        vector<int> result;
        result = preorderTraversal(root);
        sort(result.begin(), result.end());
        return result[k - 1];
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode *p, *q;
        p = root;
        while(p || !s.empty()) {
            if (p) {
                s.push(p);
                res.push_back(p->val);
                p = p->left;
            }
            else {
                q = s.top();
                s.pop();
                p = q->right;
            }
        }
        return res;
    }
};

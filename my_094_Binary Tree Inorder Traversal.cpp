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
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* p = root;
        TreeNode* q;
        vector<int> res;
        stack<TreeNode*> s;
        while(p || !s.empty()) {
            if(p) {
                s.push(p);
                p = p->left;
            }
            else {
                q = s.top();
                s.pop();
                res.push_back(q->val);
                p = q->right;
            }
        }
        return res;
    }
};

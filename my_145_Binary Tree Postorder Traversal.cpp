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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result = {};
        if (root == NULL)
            return result;
        stack<TreeNode*> s;
        TreeNode *cur;
        TreeNode *pre = NULL;
        s.push(root);
        while (!s.empty()) {
            cur = s.top();
            if((cur->left == NULL && cur->right == NULL) || (pre != NULL && (pre == cur->left || pre == cur->right))) {
                result.push_back(cur->val);
                s.pop();
                pre = cur;
            }
            else {
                if (cur->right != NULL)
                    s.push(cur->right);
                if (cur->left != NULL)
                    s.push(cur->left);
            }
        }
        return result;
    }
};

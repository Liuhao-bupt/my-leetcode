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
    int rob(TreeNode* root) {
        vector<int> res = getmoney(root);
        return max(res[0], res[1]);
    }
    vector<int> getmoney(TreeNode* root) {
        vector<int> res(2,0);
        if (!root)
            return res;
        vector<int> lg = getmoney(root->left);
        vector<int> rg = getmoney(root->right);
        res[0] = root->val + lg[1] + rg[1];
        res[1] = max(lg[0], lg[1]) + max(rg[0], rg[1]);
        return res;
    }
};

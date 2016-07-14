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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty())
            return NULL;
        auto b = nums.begin();
        auto e = nums.end();
        auto m = (b + (e - b) / 2);
        TreeNode* root = new TreeNode(*m);
        vector<int> vl;
        vector<int> vr;
        vl.assign(b, m);
        vr.assign(m + 1, e);
        root->left = sortedArrayToBST(vl);
        root->right = sortedArrayToBST(vr);
        return root;
    }
};

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
    
    int pathSum(TreeNode* root, int sum) {
        if (!root)
            return 0;
        return jisuan(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
    int jisuan(TreeNode* root, int cur, int sum) {
        if(!root)
            return 0;
        cur += root->val;
        return (cur == sum) + jisuan(root->left, cur, sum) + jisuan(root->right, cur, sum);
    }
};

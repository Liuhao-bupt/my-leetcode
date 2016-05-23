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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return false;
        if(root->val == sum && isleaf(root))
            return true;
        sum -= root->val;
        return(hasPathSum(root->left,sum) || hasPathSum(root->right,sum));
    }
    bool isleaf(TreeNode* p)
    {
        if(p && !p->left && !p->right)
            return true;
        return false;
    }
};

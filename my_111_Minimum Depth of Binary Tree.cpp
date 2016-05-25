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
    int minDepth(TreeNode* root) {
    if(!root)
        return 0;
    if(root->left && !root->right)
        return(1 + minDepth(root->left));
    if(root->right && !root->left)
        return(1 + minDepth(root->right));
    else
    {
        int i = minDepth(root->left);
        int j = minDepth(root->right);
        return(i > j ? j + 1 : i + 1);
    }
    }
};

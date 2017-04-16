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
    int maxDiameter = 0;
public:
    int getHeight(TreeNode* root){
        if(!root)
            return 0;
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        if(left + right > maxDiameter)
            maxDiameter = left + right;
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        getHeight(root);
        return maxDiameter;
    }
};

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
    bool isSymmetric(TreeNode* root) {
        if (!root)
            return true;
        woreverse(root->left);
        return isxiangtong(root->left, root->right);
    }
private:
    void woreverse(TreeNode* root){
        if(!root)
            return;
        if(!root->left && !root->right)
            return;
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
        woreverse(root->left);
        woreverse(root->right);
    }
    bool isxiangtong(TreeNode* p, TreeNode *q){
        if(!p && !q)
            return true;
        if(!p || !q)
            return false;
        if(p->val != q->val)
            return false;
        return(isxiangtong(p->left, q->left) && isxiangtong(p->right, q->right));
    }
};

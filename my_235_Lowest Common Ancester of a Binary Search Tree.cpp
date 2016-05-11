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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return NULL;
        int max=((p->val>q->val) ? p->val:q->val);
        int min=(p->val+q->val)-max;
        while(max<root->val||min>root->val){
         if(max<root->val)
            root=root->left;
        else
            root=root->right;
        }
            return root;
    }
};

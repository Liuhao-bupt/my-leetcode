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
    vector<int> res;
public:
    int findBottomLeftValue(TreeNode* root) {
        Sol(root,0);
        return res.back();
    }
    void Sol(TreeNode* root, int level){
        if(!root)
            return;
        if(level == res.size())
            res.push_back(root->val);
        Sol(root->left,level+1);
        Sol(root->right,level+1);
    }
};

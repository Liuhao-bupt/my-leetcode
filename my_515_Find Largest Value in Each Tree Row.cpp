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
    void Sol(TreeNode* root, int level){
        if(!root)
            return;
        if(res.size() < level + 1)
            res.push_back(root->val);
        else{
            if(root->val > res[level])
                res[level] = root->val;
        }
        Sol(root->left, level+1);
        Sol(root->right,level+1);
    }
    vector<int> largestValues(TreeNode* root) {
        Sol(root,0);
        return res;
    }
    
};

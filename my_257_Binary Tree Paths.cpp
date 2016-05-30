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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(!root)
            return result;
        string path = to_string(root->val);
        helper(root, path, result);
        return result;
    }
    void helper(TreeNode* root, string &path, vector<string> &result)
    {
        if(!root->left && !root->right)
            result.push_back(path);
        if(root->left){
            string temp = path;
            temp += "->";
            temp += to_string(root->left->val);
            helper(root->left, temp, result);
        }
        if(root->right) {
            string temp = path;
            temp += "->";
            temp += to_string(root->right->val);
            helper(root->right, temp, result);
        }
    }
};

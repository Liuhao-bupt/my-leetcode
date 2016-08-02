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
    int sumNumbers(TreeNode* root) {
        if (!root)
            return 0;
        string path = to_string(root->val);
        vector<string> res;
        int result = 0;
        Sol(root, path, res);
        for (auto c : res)
            result += stoi(c);
        return result;
    }
    void Sol(TreeNode* root, string &path, vector<string> &res) {
        if (!root->left && !root->right)
            res.push_back(path);
        if (root->left) {
            string temp = path;
            temp += to_string(root->left->val);
            Sol(root->left, temp, res);
        }
        if (root->right) {
            string temp = path;
            temp += to_string(root->right->val);
            Sol(root->right, temp, res);
        }
    }
};

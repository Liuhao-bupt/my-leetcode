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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> result;
        if (!root)
            return result;
        vector<int> path;
        path.push_back(root->val);
        helper(root, result, path, sum);
        return result;
        
    }
    void helper(TreeNode* root, vector<vector<int>>& result, vector<int>& path, int sum) {
        if (!root->left && !root->right && Sum(path) == sum)
            result.push_back(path);
        if (root->left) {
            vector<int> temp = path;
            temp.push_back(root->left->val);
            helper(root->left, result, temp, sum);
        }
        if (root->right) {
            vector<int> temp = path;
            temp.push_back(root->right->val);
            helper(root->right, result, temp, sum);
        }
    }
    int Sum(vector<int> path) {
        int sum = 0;
        for (int i: path)
            sum += i;
        return sum;
    }
};

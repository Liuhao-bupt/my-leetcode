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
    vector<TreeNode*> generateTrees(int n) {
        if(n == 0)
            return {};
        return genTrees(1,n);
    }
    vector<TreeNode*> genTrees(int start, int end){
        vector<TreeNode*> res;
        if(start > end){
            res.push_back(NULL);
            return res;}
        else if(start == end){
            TreeNode *p =  new TreeNode(start);
            res.push_back(p);
            return res;
        }
        else{
            for(int i = start; i <= end; ++i){
                vector<TreeNode*> left = genTrees(start,i-1);
                vector<TreeNode*> right = genTrees(i+1, end);
                for(auto itleft : left)
                    for(auto itright : right){
                        TreeNode *root = new TreeNode(i);
                        root->left = itleft;
                        root->right = itright;
                        res.push_back(root);
                    }
            }
            return res;
        }
    }
};

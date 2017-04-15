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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        map<int,int> res;
        vector<int> ans;
        Hash(root,res);
        int maxCount = res.begin()->second;
        int value = res.begin()->first;
        for(auto it = res.begin(); it != res.end(); it++){
            if(it->second > maxCount){
                ans = {};
                ans.push_back(it->first);
                maxCount = it->second;
                value = it->first;
            }
            else if(it->second == maxCount)
                ans.push_back(it->first);
        }
        return ans;
    }
    int Hash(TreeNode* root,map<int,int>&res){
        if(!root)
            return 0;
        int left = Hash(root->left, res);
        int right = Hash(root->right,res);
        int cur = root->val + left + right;
        res[cur] += 1;
        return cur;
    }
};

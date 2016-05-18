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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    if(!root)
        return {};
    vector<vector<int>> result = {};
    vector<int> cur = {};
    queue<TreeNode *> nodequeue;
    nodequeue.push(root);
    TreeNode *p, *q;
    TreeNode *last = root;
    while(!nodequeue.empty()){
        p=nodequeue.front();
        nodequeue.pop();
        cur.push_back(p->val);
        if(p == last){
            result.push_back(cur);
            cur = {};
            if(p->left){
                nodequeue.push(p->left);
                last = p->left;}
            if(p->right){
                nodequeue.push(p->right);
                last = p->right;}
            if(!p->left && !p->right)
                last = q;
        }
        else
        {
        if(p->left){
            nodequeue.push(p->left);
            q = p->left;}
        if(p->right){
            nodequeue.push(p->right);
            q = p->right;}
        }
    }
    vector<int>::size_type index;
	for (index = 0; index != result.size() / 2; ++index) {
		auto temp = result[index];
		result[index] = result[result.size()-1-index];
		result[result.size() - 1 - index] = temp;
	}
	return result;
    }
};

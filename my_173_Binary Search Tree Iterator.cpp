/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode *> stk;
    BSTIterator(TreeNode *root) {
        if (root) {
            while (root) {
                stk.push(root);
                root = root->left;}
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !stk.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* temp = stk.top();
        stk.pop();
        int result = temp->val;
        if (temp->right) {
            temp = temp->right;
            while(temp) {
                stk.push(temp);
                temp = temp->left;}
        }
        return result;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

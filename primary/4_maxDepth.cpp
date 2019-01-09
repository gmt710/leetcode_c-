/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};

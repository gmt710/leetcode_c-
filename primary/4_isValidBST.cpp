/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// python 48ms
// c++ 4ms
static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool ValidBST(TreeNode* root, long small,long large){
        if(root == NULL)
            return true;
        if((small >= root->val) || (large <= root->val))
            return false;
        return ValidBST(root->left, small, root->val) && ValidBST(root->right, root->val, large);
    }
    bool isValidBST(TreeNode* root) {
        // 此处使用 LONG_MIN, LONG_MAX
        return ValidBST(root, LONG_MIN, LONG_MAX);
    }
};

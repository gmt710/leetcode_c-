/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// python 32ms
// c++ 4ms
static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isSametree(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL)
            return true;
        if((left && right) && (left->val == right->val)){
            // 对称主要判断最左等于最右
            // 次左等于次右
            bool l = isSametree(left->left, right->right);
            bool r = isSametree(left->right, right->left);
            return (l && r);
        }
        else
            return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        else
            return isSametree(root->left, root->right);
    }
};

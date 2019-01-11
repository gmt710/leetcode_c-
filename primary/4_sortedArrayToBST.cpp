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
    TreeNode* binarySearch(vector<int>& nums, int low, int high){
        if(low > high) 
            return NULL;
        int mid = (high + low) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = binarySearch(nums, low, mid-1);
        node->right = binarySearch(nums, mid+1, high);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // python 68ms
        // c++ 8ms
        // 参考：https://blog.csdn.net/yuejisuo1948/article/details/84349654
        // 递归。用二分法每次将有序数组的中间一个数作为根结点，
        // 其左边再用二分法构建左子树，其右边也用二分法构建右子树。
        TreeNode* root = binarySearch(nums, 0, nums.size()-1);
        return root;
    }
    
};

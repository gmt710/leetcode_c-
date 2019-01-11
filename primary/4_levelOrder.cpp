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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // python 68ms
        // c++ 4ms
        // 参考：https://blog.csdn.net/Jaster_wisdom/article/details/80977829
        // 采用BFS：
        // BFS：
        // 1.访问起始顶点V0;
        // 2.依次访问V0的各个邻接点V01,V02,V03...V0x;
        // 3.假设最近一次访问的项依次是Vi1,Vi2,Vi3...Viy，
        // 则依次访问Vi1,Vi2,Vi3...Viy未访问过的邻接点
        // 4.重复3，直到所有顶点均被访问
        
        // 初始化一个返回值的类型
        vector<vector<int>> ans;
        // 初始化一个队列来存储
        queue<TreeNode*> q;
        if(root == NULL)
            return ans;
        // 将root入队
        q.push(root);
        while(!q.empty()){
            // 每一层中的所有结点
            vector<int> temp;
            // 每一层的大小
            int length = q.size();
            for(int i=0; i < length; i++){
                // 队尾出队
                TreeNode* node = q.front();
                temp.push_back(node->val);
                q.pop();
                // 遍历左右子树
                if(node->left != NULL)
                    q.push(node->left);
                if(node->right != NULL)
                    q.push(node->right);
            }
            // 将一整层放到ans中
            ans.push_back(temp);
        }
        return ans;
    }
};

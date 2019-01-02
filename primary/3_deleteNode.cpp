/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        # 参考之前写的python代码：
        # https://github.com/gmt710/leetcode_python/blob/master/primary/3_deleteNode.py
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // python 100ms
        // c++ 8ms
        vector<int> q;
        // 如果链表为空或者只有一个元素，则必定为回文链表
        if (head == NULL || head->next == NULL)
            return true;
        // 遍历一遍链表，将其保存到数组中
        while(head){
            q.push_back(head->val);
            head = head->next;
        }
        for(int i=0; i < q.size()/2 ; i++){
            // 如果正数i位置的数与倒数i位置的数相等
            if(q[i] == q[q.size()-i-1]){
                // 如果i到了一半位置
                if(i == q.size()/2-1)
                    return true;
            }
            // 只要不相等就不是回文链表 
            else
                return false;
        }
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// python 52ms
// c++ 不屏蔽cin与stdin同步时，12ms
// c++ 使用下述的代码时，4ms
static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool hasCycle(ListNode *head) {
        # 快慢指针，如果慢指针与快指针遍历到同一个点，说明有环
        if(head == NULL)
            return false;
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast && fast->next){
            # 快指针一次走两步，慢指针一次走一步
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};

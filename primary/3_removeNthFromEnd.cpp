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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        # 此题参考之前写的python无效，参考:
        # https://blog.csdn.net/huangfei711/article/details/79253706
        # 思想:需要用两个指针来帮助我们解题，pre 和 cur 指针。首先 cur 指针先向前走 n 步，
        # 如果此时 cur 指向空，说明 n 为链表的长度，则需要移除的为首元素，
        # 那么此时我们返回 head->next 即可，如果 cur 存在，我们再继续往下走，此时 pre 指针也跟着走，
        # 直到 cur 为最后一个元素时停止，此时 pre 指向要移除元素的前一个元素，
        # 我们再修改指针跳过需要移除的元素即可。
        
        if(head->next == NULL){
            return NULL;
        } 
        ListNode *pre = head;
        ListNode *cur = head;
        // 先找正数第n个
        for(int i=0; i<n; i++){
            cur = cur->next;
        }
        if(cur == NULL){
            return head->next;
        }
        // cur与pre相隔n,直到找到找到尾指针，说明pre->next已经是倒数第n个数
        // cur: -- ---
        // pre: ---
        while(cur->next != NULL){
            cur = cur->next;
            pre = pre->next;
        }
        pre->next = pre->next->next;
        return head;
    }
};

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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode *temp_last = NULL;
        ListNode *temp_head= head;
        ListNode *temp_next;
        while(temp_head != NULL){
            // 将下一个指针保存到temp_next中
            temp_next = temp_head->next;
            
            // 将当前遍历的temp_head插入到temp_last之前
            temp_head->next = temp_last;
            temp_last = temp_head;
            
            // 遍历下一个指针 
            temp_head = temp_next;
        }
        return temp_last;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

static int x = []() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *rhead = NULL;
        ListNode *p = l1;
        ListNode *q = l2;
        
        if(l1 == NULL)
            return l2;
        else if(l2 == NULL)
            return l1;
        else{
            # 由于rhead为空，所以先给值。
            # 此处参考:https://blog.csdn.net/Lv_Victor/article/details/52464373
            if(p->val <= q->val){
                rhead = p;
                p = p->next;
            }
            else{
                rhead = q;
                q = q->next;
            }
        }
        
        
        ListNode *r = rhead;
        // 如果q或p其中有一个为空则跳出循环
        while(q&& p){
            // 如果p中的值大，就将p当前指针链接到r上
            if(p->val <= q->val){
                //将p当前指针链接到r后
                r->next = p;
                //r向前走
                r = p;
                //p释放当前指针
                p = p->next;
            }
            // 如果q中的值大，就将q当前指针链接到r上
            else{
                //将q当前指针链接到r后
                r->next = q;
                //r向前走
                r = q;
                //q释放当前指针
                q = q->next;
            }
        }
        //如果是p为空，将q后的链表全部给p
        if(p == NULL)
            p = q;
        //将p全部链接到r上
        r->next = p;
        //返回r的头指针rhead
        return rhead;
    }
};

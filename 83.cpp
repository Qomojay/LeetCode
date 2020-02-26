/*************************************************************************
	> File Name: 83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 16时20分36秒
 ************************************************************************/

//删除排序链表中的重复元素

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p = head, *q;
    while(p && p->next) {
        if (p->val != p->next->val) {
            p = p->next;
        }else {
            q = p->next;
            p->next = q->next;
            free(q);
        }
    }
    return head;
}

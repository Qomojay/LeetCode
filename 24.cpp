/*************************************************************************
	> File Name: 24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 16时18分02秒
 ************************************************************************/

//两两交换链表中的节点

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *p, *q, ret;
    ret.next = head;
    p = &ret;
    q = head;
    while(q && q->next) {
        p->next = q->next;
        q->next = q->next->next;
        p->next->next = q;
        p = q;
        q = q->next;
    }
    return ret.next;
}

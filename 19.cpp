/*************************************************************************
	> File Name: 19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 15时21分11秒
 ************************************************************************/

//删除链表的倒数第N个节点

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *p, *q, ret;
    ret.next = head;
    p = q = &ret;
    do{ q = q->next;}while(n--);
    while(q) {
        q = q->next;
        p = p->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return ret.next;
}

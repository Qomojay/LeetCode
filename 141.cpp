/*************************************************************************
	> File Name: 141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 16时24分19秒
 ************************************************************************/

//环形链表

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    if (p == NULL) return false;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return false; 
        q = q->next;
    } while (q != p);
    return true;
}

/*************************************************************************
	> File Name: 206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 14时21分01秒
 ************************************************************************/
//反转链表

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

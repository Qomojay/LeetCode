/*************************************************************************
	> File Name: 237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 14时24分06秒
 ************************************************************************/

//删除链表中的节点

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *p = node->next;
    node->val = p->val;
    node->next = p->next;
    free(p);
    return ;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* pre=0,* cur=head,* tem;
    while(cur!=0)
    {
        tem=cur->next;
        cur->next=pre;
        pre=cur;
        cur=tem;
    }
    head=pre;
    return head;
}
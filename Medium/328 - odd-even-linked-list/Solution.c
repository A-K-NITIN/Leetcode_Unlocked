/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(!head)
        return head;
    struct ListNode* odd=head,*even=head->next,*tem=head->next;
    while(even&&even->next){
        odd->next=even->next;
        odd=even->next;
        even->next=odd->next;
        even=odd->next;
    }
    odd->next=tem;
    return head;
}
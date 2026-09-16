// Pushed: 2026-09-16 09:21:24 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 9.2 MB

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* fast=head,*slow=head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
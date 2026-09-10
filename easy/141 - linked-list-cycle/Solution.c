/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
   struct ListNode*slow=head,*fast=head;
   while(fast!=0&&fast->next!=0&&fast->next->next!=0){
    fast=fast->next->next;
    slow=slow->next;
    if(fast==slow)
     return 1;
   }
   return 0;

}
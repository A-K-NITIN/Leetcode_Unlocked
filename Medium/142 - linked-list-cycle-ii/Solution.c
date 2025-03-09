/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
 struct ListNode*slow=head,*fast=head;
   while(fast!=0&&fast->next!=0&&fast->next->next!=0){
    fast=fast->next->next;
    slow=slow->next;
    if(fast==slow){
     slow=head;
     while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
      }
       return slow;
     }
   }
return 0;
}
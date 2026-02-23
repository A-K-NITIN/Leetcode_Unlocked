/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
   struct ListNode*start=head,*last, *p=head;
   int diff=0;
   while(p != NULL){
    diff++;
    if(diff==k){
        if(start==head)
            head=p;
        last=p->next;
        p=p->next;
        struct ListNode* pre=start,*ptr=start->next;
            while(ptr!=last){
                struct ListNode* tem=ptr->next;
                ptr->next=pre;
                pre=ptr;
                ptr=tem;
            }

        diff=0;
        start->next=last;
        start=last->next;
        if(p)
            diff++;
        }
        if(diff)
        p=p->next;
   }
   return head;
}
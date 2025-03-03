/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* pre,*p1=head,*p2;
    while(p1!=NULL){
        p2=p1->next;
        pre=p1;
        while(p2!=NULL){
         if(p1->val==p2->val){
            pre->next=p2->next;
            p2=p2->next;
            continue;
         }
         pre=p2;
        p2=p2->next;
      }
      p1=p1->next;
    }
    return head;
}
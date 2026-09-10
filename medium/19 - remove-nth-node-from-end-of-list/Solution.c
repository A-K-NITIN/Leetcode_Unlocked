/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode*ptr=head;
    int i=0;
    while(ptr!=NULL){
        i++;
        ptr=ptr->next;
    }
    n=(i-n)+1;
    if(n==1)
    head=head->next;
   else{
    ptr=head;
    for(i=1;i<n-1;i++)
        ptr=ptr->next;
    ptr->next = ptr->next->next;
   }
    return head;
}
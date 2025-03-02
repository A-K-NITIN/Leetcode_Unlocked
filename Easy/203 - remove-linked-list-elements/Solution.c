/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* ptr=head,*pev=0;
    while(ptr!=NULL){
        if(ptr->val==val&&pev==NULL){
           head=head->next;
           ptr=ptr->next; 
           continue;
        }
        if(ptr->val==val){
          pev->next=ptr->next;
          ptr=ptr->next;
          continue;
          }
        pev=ptr;
        ptr=ptr->next;
    }
    return head;
}
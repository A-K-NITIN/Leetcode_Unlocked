/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode*ptr=head;
     unsigned short int pos=0;
    while(ptr!=NULL){
        pos++;
        ptr=ptr->next;
    }
    pos/=2;
    ptr=head;
    while(pos!=0){
        pos--;
        ptr=ptr->next;
    }
    head=ptr;
    return head;
}
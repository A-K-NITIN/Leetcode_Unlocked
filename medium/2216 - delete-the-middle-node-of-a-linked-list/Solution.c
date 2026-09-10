/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode* ptr=head;
    int n=0;
    while(ptr){
        ptr=ptr->next;
        n++;
    }
    if(n==1||n==0){
        return NULL;
    }
    n/=2;
    struct ListNode* prev=NULL;
    ptr=head;
    for(int i=0;i<n;i++){
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=ptr->next;
    return head;
}
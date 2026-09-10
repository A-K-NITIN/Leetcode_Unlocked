/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL)
        return head;
    struct ListNode* p=head,*prev;
    int count =1;
    while(p->next){
        count++;
        prev=p;
        p=p->next;
    }
    k%=count;
    while(k>0){
        prev->next=NULL;
        p->next=head;
        head=p;
        p=head;
        while(p->next){
        prev=p;
        p=p->next;
    }
    k--;
    }
    return head;
}
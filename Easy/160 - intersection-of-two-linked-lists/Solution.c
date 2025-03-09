/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *a=headA;
    while(a!=0){
        struct ListNode *b=headB;
    while(b!=0){
        if(a==b)
         return a;
        
        b=b->next;
    }
    a=a->next;
}
    return 0;
}
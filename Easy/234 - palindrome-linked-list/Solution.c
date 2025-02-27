/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode*ptr=head;
    int n=0;
    while(ptr!=NULL){
        n++;
        ptr=ptr->next;
    }
    int a[n];
    ptr=head;
    for(int i=0;i<n;i++,ptr=ptr->next)
        a[i]=ptr->val;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i])
         return 0;
    }

    return 1;
}
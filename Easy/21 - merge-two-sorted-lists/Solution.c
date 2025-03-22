/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode*head=NULL,*tail=NULL;
   while(list1!=NULL||list2!=NULL){
     struct ListNode*newnode=malloc(sizeof(struct ListNode));
     newnode->next=NULL;
     if(head==NULL)
      head=tail=newnode;
    else{
      tail->next=newnode;
     tail=newnode;
    }
    if(list1==NULL){
      newnode->val=list2->val; 
       list2=list2->next; 
    }
    else if(list2==NULL){
      newnode->val=list1->val; 
       list1=list1->next; 
    } 
    else if(list1->val>=list2->val){
        newnode->val=list2->val;
        list2=list2->next;
    }
    else{
        newnode->val=list1->val;
        list1 =list1->next;
    }
   }
   return head;
}
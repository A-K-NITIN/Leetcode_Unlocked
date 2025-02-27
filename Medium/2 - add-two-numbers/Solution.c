/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 *
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* p1,*p2,*tem;
     unsigned short int a=0,b=0;
    p1=l1;
    while(p1!=0){
        a++;
        p1=p1->next;
        
    }
    p2=l2;
   while(p2!=0){
        b++;
        p2=p2->next;
        
    }
    if(a>b){
    p1=l1;
    p2=l2;
    }
    else{
      p1=l2;
      p2=l1;  
    }
    tem=p1;
     a=0;
    while(p1!=0){
        if(p2==0){
            if(p1->val+a>9){
            b=(p1->val+a)/10;
            p1->val=(p1->val+a)%10;
            a=b;
             }
        else{
             p1->val=p1->val+a;
            a=0;
           } 
           p1=p1->next;
        }
        else{
            if(p1->val+p2->val+a>9){
            b=(p1->val+p2->val+a)/10;
            p1->val=(p1->val+p2->val+a)%10;
            a=b;
             }
          else{
             p1->val=p1->val+p2->val+a;
            a=0;
             }
              p1=p1->next;
              p2=p2->next;
        }
 
    }
    if(a!=0){
        p2=malloc(sizeof(struct ListNode));
        p2->val=a;
        p2->next=0;
        p1=tem;
        while(p1->next!=0)
          p1=p1->next;
        p1->next=p2;
    }


    return tem;
}
// Pushed: 2026-09-21 04:31:10 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 11.1 MB

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;
        ListNode* tem=head;
        int c=0;
        if(left!=1){
            while(tem->next!=NULL){
                ++c;
                if(c==left-1)
                    break;
                tem=tem->next;
                
            }
        }
        ListNode* ptr=NULL,*prev=NULL,*next=NULL;
        if(left==1)
            ptr=head;
        else
            ptr=tem->next;
        while(ptr!=NULL){
            ++c;
            next=ptr->next;
            ptr->next=prev;
            if(c==right)
                break;
            prev=ptr;
            ptr=next;
        }
        if(left!=1){
        tem->next->next=next;
        tem->next=ptr;
        }
        else{
            //cout<<head->val<<"  "<<(head->next==NULL)<<" "<<(next==NULL);
        tem->next=next;
        head=ptr;
        }
        return head;
    }
};
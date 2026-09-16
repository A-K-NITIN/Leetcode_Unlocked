// Pushed: 2026-09-16 10:03:49 UTC
// Difficulty: Easy
// Runtime: 4 ms
// Memory: 118 MB

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
    ListNode* rev(ListNode* head){
          ListNode* ptr= head,*prev=NULL,*next=NULL;
          while(ptr!=NULL){
            next=ptr->next;
            ptr->next=prev;
            prev=ptr;
            ptr=next;
          }
          return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow= head,*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL)
            slow->next;
        slow=rev(slow);
        fast=head;
        while(slow!=NULL){
            if(slow->val!=fast->val)
                return 0;
            fast=fast->next;
            slow=slow->next;
        }
        return 1;
    }
};
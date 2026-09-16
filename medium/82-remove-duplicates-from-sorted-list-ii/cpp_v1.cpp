// Pushed: 2026-09-16 10:19:34 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 15.8 MB

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*prev=NULL,*ptr=head;
        while(ptr!=NULL){
            if(ptr->next!=NULL&&ptr->val==ptr->next->val)
                while(ptr->next!=NULL&&ptr->val==ptr->next->val)ptr=ptr->next;
            else if(prev==NULL){
                prev=ptr;
                head=ptr;
            }
            else{
                 prev->next=ptr;
                 prev=ptr;
            }
            ptr=ptr->next;
        }
        if(prev==NULL)
            return NULL;
         prev->next=NULL;
        return head;
    }
};
// Pushed: 2026-09-16 06:09:15 UTC
// Difficulty: Medium
// Runtime: 6 ms
// Memory: 161.2 MB

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
    ListNode*rev(ListNode* head){
        ListNode* prev=NULL,*ptr=head,*next=NULL;
        while(ptr!=NULL){
            next=ptr->next;
            ptr->next=prev;
            prev=ptr;
            ptr=next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        
        head=rev(head);
        ListNode*ptr=head;
        while(ptr!=NULL){
            while(ptr->next!=NULL&&ptr->val>ptr->next->val)ptr->next=ptr->next->next;
            ptr=ptr->next;  
        }
        return rev(head);
        
    }
};
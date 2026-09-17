// Pushed: 2026-09-17 06:08:28 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 11 MB

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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* prev=head,*ptr=head->next,*tem=NULL;
        head=head->next;
        while(prev!=NULL&&ptr!=NULL){
            tem=ptr->next;
            if(ptr->next!=NULL&&ptr->next->next!=NULL)
            prev->next=ptr->next->next;
            else
            prev->next=ptr->next;
            ptr->next=prev;
            prev=tem;
            if(tem!=NULL)
            ptr=tem->next;
        }
        return head;
    }
};
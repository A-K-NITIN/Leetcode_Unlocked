// Pushed: 2026-09-16 09:27:54 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 312.1 MB

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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            if(fast!=head)
                slow=slow->next;
            fast=fast->next->next;
        }
        if(slow->next==NULL)
            return NULL;
        fast=slow->next;
        slow->next=slow->next->next;
        delete fast;
        return head;
    }
};
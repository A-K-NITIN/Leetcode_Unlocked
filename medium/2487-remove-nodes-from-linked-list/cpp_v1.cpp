// Pushed: 2026-09-16 05:32:26 UTC
// Difficulty: Medium
// Runtime: 16 ms
// Memory: 173.4 MB

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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>s;
        ListNode *ptr=head;
        while(ptr!=NULL){
            while(!s.empty()&&s.top()->val<ptr->val)s.pop();
            if(!s.empty())
                s.top()->next=ptr;
            else
                head=ptr;
            s.push(ptr);
            ptr=ptr->next;
        }
        return head;
    }
};
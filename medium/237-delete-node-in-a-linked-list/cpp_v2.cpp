// Pushed: 2026-09-16 04:21:47 UTC
// Difficulty: Medium
// Runtime: 5 ms
// Memory: 12.3 MB

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        ListNode* no=node->next;
        node->next=node->next->next;
        delete no;
    }
};
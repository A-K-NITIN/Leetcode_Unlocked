// Pushed: 2026-09-16 04:46:49 UTC
// Difficulty: Medium
// Runtime: 94 ms
// Memory: 263.2 MB

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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]=i;
        ListNode* ptr=head,*prev=NULL,*tem;
        while(ptr!=NULL){
            if(mp.count(ptr->val)){
                if(ptr==head){
                    head=ptr->next;
                    //delete ptr;
                    ptr=head;
                    continue;
                }
                prev->next=ptr->next;
                //delete ptr;
                ptr=prev->next;
                continue;
            }
            prev=ptr;
            ptr=ptr->next;
        }
        return head;
    }
};
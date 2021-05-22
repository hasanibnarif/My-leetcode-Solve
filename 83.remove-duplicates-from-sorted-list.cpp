/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
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
        
        
        
        if(head==nullptr) return head;

        ListNode* ret = head;
        ListNode* node = head->next;
        ListNode* prev = head;
        
        while(node != nullptr) {

            if(prev->val==node->val) {
                prev->next = node->next;
            }
            else 
                prev = prev->next;
    

            node = node->next;
        }

        return ret;
    }
};
// @lc code=end


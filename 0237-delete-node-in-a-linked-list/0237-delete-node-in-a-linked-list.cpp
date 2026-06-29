/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // 1. Overwrite the current node's value with the next node's value
        node->val = node->next->val;
        
        // 2. Store a pointer to the next node so we can delete it later
        ListNode* nodeToDelete = node->next;
        
        // 3. Bypass the next node
        node->next = node->next->next;
        
        // 4. Free the memory of the bypassed node
        delete nodeToDelete; 
    }
};
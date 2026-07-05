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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int cnt1 = 0, cnt2 = 0;

        // Count nodes in List A
        while (temp1 != NULL) {
            cnt1++;
            temp1 = temp1->next;
        }

        // Count nodes in List B
        while (temp2 != NULL) {
            cnt2++;
            temp2 = temp2->next;
        }

        // Reset pointers
        temp1 = headA;
        temp2 = headB;

        // Move the longer list ahead
        if (cnt1 > cnt2) {
            int d = cnt1 - cnt2;
            while (d--) {
                temp1 = temp1->next;
            }
        } else {
            int d = cnt2 - cnt1;
            while (d--) {
                temp2 = temp2->next;
            }
        }

        // Move both pointers together
        while (temp1 != temp2) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return temp1;
    }
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    // ListNode* temp =head;
  
    // int cnt=0;
    // while(temp!=NULL){
    //     cnt++;
    //     temp=temp->next;
    // }
    // if(cnt==n){
    //     return head->next;
    // }
    // temp = head;
    //  for(int i = 1; i < cnt - n; i++){
    //         temp = temp->next;
    //     }
    //     temp->next=temp->next->next;
    //     return head;

       if(head == NULL) return NULL;
        ListNode* temp =head;
        ListNode* fast =head;
        ListNode* slow =head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==NULL) return head->next;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
          ListNode* dltNode =slow->next;
          slow->next=slow->next->next;
          
          return head;
    }
};
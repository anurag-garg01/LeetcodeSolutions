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
    ListNode *detectCycle(ListNode *head) {
      // return the node wher cycle begins
        if(head == NULL)
            return head;
        ListNode* slow =head;
        ListNode* fast = head;
        ListNode* temp = head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
           // prev = slow;
            slow =slow->next;
            
            if(fast ==slow){
                while(temp!=slow){
                    temp = temp->next;
                    slow = slow->next;
                }
                return temp;
            }
        }
        
        return NULL;
    }
};
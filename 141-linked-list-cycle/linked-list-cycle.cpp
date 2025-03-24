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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        if(head ==NULL || head->next == NULL){
            return false;
        }


        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;

            if(fast){
                fast=fast->next;
            }

            if(fast==slow){
                return true;
            }

        }

        if(fast!=NULL && fast==slow)
        {
            return true;
        }

        return false;
    }
};
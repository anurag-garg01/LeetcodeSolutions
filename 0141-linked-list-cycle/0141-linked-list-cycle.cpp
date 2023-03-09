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
        // return whether linked list has cycle or not 
        
        if(head ==NULL)
            return false;
            if(head->next ==NULL){
                false;
            }
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(slow!=NULL ){
            fast = fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            else{
                return false;
            }
            
            slow = slow->next;
            if(fast==NULL)
                return false;
            if(fast==slow)
                return true;
            
        }
        
        
        
        return false;
    }
};
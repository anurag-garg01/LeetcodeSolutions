# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        

        if not head:
            return None

        fwd = head.next 
        prev = None
        curr = head

        while (curr):
            
            curr.next = prev 
            prev = curr 
            curr = fwd 
            if fwd:
                fwd = fwd.next 
            

        return prev

        
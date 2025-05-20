# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # find the position 

        # has cycle or not ? 
        slow =head 
        fast = head
        temp=head

        while (fast and fast.next):
            slow = slow.next
            fast = fast.next
            if fast:
                fast = fast.next 
            
            if (fast==slow):
                while temp!=slow:
                    temp = temp.next
                    slow = slow.next
                
                return slow

        
        # return False
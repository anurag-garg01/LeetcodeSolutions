# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        # has cycle or not ? 
        slow =head 
        fast = head

        while (fast and fast.next):
            slow = slow.next
            fast = fast.next
            if fast:
                fast = fast.next 
            
            if (fast==slow):
                return True

        
        return False
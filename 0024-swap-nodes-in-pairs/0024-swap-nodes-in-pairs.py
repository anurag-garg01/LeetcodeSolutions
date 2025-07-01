# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        # swap the nodes in pairs 

        #  1 2 3 4 
        # res = 2 1 4 3 
        
        if not head:
            return head

        if not head.next:
            return head

        dummyNode = ListNode(0)

        prevNode = dummyNode

        currNode = head
        fwd = head.next


        while currNode and fwd:
            currNode.next = fwd.next
            prevNode.next = fwd
            fwd.next = currNode
            prevNode = currNode 
            if currNode: 
                currNode = currNode.next
            if currNode: 
                fwd = currNode.next
        
        return dummyNode.next






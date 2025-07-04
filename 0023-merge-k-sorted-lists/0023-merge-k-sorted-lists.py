# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        # merge the K-sorted linked lists 

        res = [] # merged lists 
        if not lists:
            return None 

        # merge k lists [1] [1] [2]

        n = len(lists)
        
        


        while len(lists) >1:
            mergedList = []
            for i in range(0,len(lists),2):
                # Take 2 lists 
                list1= lists[i]
                list2 = lists[i+1] if (i+1)<len(lists) else None
                mergedList.append(self.mergeList(list1,list2))
            
            lists = mergedList
        

        return lists[0]
    

    def mergeList(self,l1,l2):
        # list1 and list2 
        dummy = ListNode()
        temp = dummy

        while l1 and l2:
            if l1.val<=l2.val:
                temp.next = l1
                l1 = l1.next
            else:
                temp.next = l2
                l2 = l2.next 
            temp = temp.next
        
        if l1:
            temp.next = l1
        
        if l2:
            temp.next = l2
        

        return dummy.next









        

        




        
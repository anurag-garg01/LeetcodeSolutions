# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def mergeTrees(self, t1: Optional[TreeNode], t2: Optional[TreeNode]) -> Optional[TreeNode]:

        if not t1 and not t2:
            return None 
        
        v1 = t1.val if t1 else 0
        v2 = t2.val if t2 else 0 

        val = v1 + v2

        root = TreeNode(val)

        root.left = self.mergeTrees(t1.left if t1 else None, t2.left if t2 else None )


        root.right = self.mergeTrees(t1.right if t1 else None , t2.right if t2 else None )


        return root

        
        
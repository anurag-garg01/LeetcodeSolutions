# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        # return the max depth 

        def func(root):
            if not root:
                return 0
            
            lh = func(root.left)
            rh = func(root.right)


            return 1 + max(lh,rh)


        return func(root)
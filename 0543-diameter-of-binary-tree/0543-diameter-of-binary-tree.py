# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        # find the diameter of binary tree 
        self.maxi = -inf
        def func(root,maxi):
            if not root:
                return 0

            
            lh = func(root.left,maxi)
            rh = func(root.right,maxi)

            self.maxi = max(maxi, lh+rh)

            return 1 + max(lh,rh)

        
        func(root,self.maxi)

        return  self.maxi 



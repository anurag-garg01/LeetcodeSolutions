# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:

        # find the kth smallest in BST 
        # get the inorder traversal and return k-1th index element 

        res = []



        def func(root): # inorder traversal 
            nonlocal k 
            if not root:
                return None
            func(root.left)
            if(k>0):
                res.append(root.val)
                k-=1
            else:
                return 

            func(root.right)
        
        func(root)

        return res[k-1]

        
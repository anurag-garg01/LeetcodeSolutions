# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        mini = float(-inf)
        maxi = float (inf)

        #validate the BST 
        
        def func(node, mini,maxi):
            if not node:
                return True
                
            if node.val>=maxi or node.val<=mini:
                return False
            
            # check the conditions

            # going to the left side 

            return func(node.left,mini,node.val) and func(node.right,node.val,maxi)
        
        return func(root, mini, maxi)






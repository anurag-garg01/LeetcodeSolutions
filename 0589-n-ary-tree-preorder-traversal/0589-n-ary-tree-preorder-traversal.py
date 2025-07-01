"""
# Definition for a Node.
class Node:
    def __init__(self, val: Optional[int] = None, children: Optional[List['Node']] = None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:

        if not root:
            return []

        res = []

        def func(root):
            nonlocal res


            res.append(root.val)
            # func(root.left)
            # func(root.right)
            for child in root.children:
                func(child)
        

        func(root)
        
        return res

        
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        # return the level order traversal 

        # base case add here 
        if not root:
            return []


        res = []

        from collections import deque

        q = deque()

        q.append(root)






        def bfs():
            while q:
                
                levelArray = []
                level_size = len(q)
                for _ in range(level_size) :
                    temp = q.popleft()

                    if temp.left:
                        q.append(temp.left)
                    if temp.right: 
                        q.append(temp.right)

                    levelArray.append(temp.val)
                
                res.append(levelArray.copy())

        bfs()


        return res


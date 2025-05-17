class Solution:
    def removeKdigits(self, num: str, k: int) -> str:

        # Print the minimum number after removing k digits


        # [1,4,3,2,2,1,9]


        # stack elements should be in increasing order 
        stack = []

        for c in num: 
            while k>0 and stack and stack[-1]>c:
                k-=1
                stack.pop()

            stack.append(c)
        

        while(k>0):
            stack.pop()
            k-=1
        

        res = "".join(stack)

        res = res.lstrip("0")

        return res if res else "0"

        
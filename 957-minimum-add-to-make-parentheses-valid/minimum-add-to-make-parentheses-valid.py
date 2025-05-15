class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        # minimum add to make parenthesis valid 
        left_open =0 #0
        left_closed = 0 #1
        n = len(s)

        for i in range(0,n):
            if s[i]=='(':
                left_open +=1
            elif left_open==0:
                left_closed +=1
            else :
                left_open-=1

        # ans = max(left_open,left_closed)

        
        # right_open = 0 #1
        # right_closed = 0 #0


        # for i in range(n-1,0,-1):
        #     if s[i]==')':
        #         right_open+=1
        #     elif right_open==0:
        #         right_closed +=1
        #     else :
        #         right_open-=1

        # # ans1 = max(right_open,right_closed)

        # ans = max(left_open,right_open)


        return left_open + left_closed
        



         
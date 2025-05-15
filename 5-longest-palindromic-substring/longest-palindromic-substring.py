class Solution:

    def check_palindrome(self, s : str,i : int , j : int) -> str:
        n = len(s)
        ans = ""

        while(i>=0 and j<n):
            if (i>=0 and s[i]==s[j] and j<n):
                ans = s[i:j+1]
                i-=1
                j+=1
            else:
                break
        

        return ans
                

            
        
        # break - out of loop 

        

    def longestPalindrome(self, s: str) -> str:
        # return the longest palindrome in a string 

        # "babad"

        start = 0
        end = len(s)
        n = len(s)
        ans = ""
        maxi = 0

        mid = (start+end)//2


        for i in range(n):
            # for odd case 
            res = self.check_palindrome(s,i,i)

            print(f"i = {i} and res = {res}")

            if len(res)>maxi:
                maxi = len(res)
                ans = res

        # now for even case


        for i in range(n):
            # for odd case 
            res = self.check_palindrome(s,i,i+1)

            print(f"i = {i} and res = {res}")

            if len(res)>maxi:
                maxi = len(res)
                ans = res
        



        return ans

            





        
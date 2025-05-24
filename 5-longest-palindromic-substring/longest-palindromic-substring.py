class Solution:
    def longestPalindrome(self, s: str) -> str:
        # return the longest palindroming substring 

        ans_len = 0
        ans = ""
        n = len(s)
        
        # def is_palindrome(i,j):
        #     return true/false 
        
        def check_palindrome(i,j):
            nonlocal ans_len
            nonlocal ans

            while i>=0 and j<n and s[i]==s[j]:
                if((j-i+1)>=ans_len):
                    ans = s[i:j+1]
                ans_len = max(ans_len, (j-i+1))
                i-=1
                j+=1
            


        for i in range (len(s)):

            check_palindrome(i,i)

            check_palindrome(i,i+1)

        

        return ans




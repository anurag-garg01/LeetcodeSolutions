class Solution:
    def countSubstrings(self, s: str) -> int:
        # given a string s, return the number of palindromic substrings in it 

        # return the list of substrings that are palindrome
        ans_len = 0
        ans = ""
        n = len(s)
        cnt =0
        
        # def is_palindrome(i,j):
        #     return true/false 
        
        def check_palindrome(i,j):
            nonlocal ans_len
            nonlocal ans
            nonlocal cnt

            while i>=0 and j<n and s[i]==s[j]:
                # if((j-i+1)>=ans_len):
                #     ans = s[i:j+1]
                cnt +=1
                ans_len = max(ans_len, (j-i+1))
                i-=1
                j+=1
            


        for i in range (len(s)):

            check_palindrome(i,i)

            check_palindrome(i,i+1)

        

        return cnt

        
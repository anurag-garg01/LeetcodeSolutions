class Solution:
    def breakPalindrome(self, palindrome: str) -> str:
        # break the palindrome , give the lexically smallest one 
        n = len(palindrome)

        if n==1:
            return ""

        chars= list(palindrome)
        

        i =0
        j = n-1


        while i<j:
            if (chars[i]!=chars[j]):
                return "".join(chars)

            # check the condition when both are same


            # we cant edit string right


            letter =chars[i]

            if (chars[i] != 'a'):
                if letter == 'a':
                    chars[i] = 'z'
                else :
                    chars[i] = 'a'
                break
            
            i+=1
            j-=1

        print(f"i = {i} , j = {j}")

        if (i>=j):
            chars[n-1]='b'

        return "".join(chars)


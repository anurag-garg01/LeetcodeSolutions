class Solution:
    def isPalindrome(self, s: str) -> bool:
        # is palindrome 

        s = s.strip()

        s =s.lower()


        


        if s=="":
            return True

        
        n = len(s)
        i =0
        str2 =""

        for i in range (n):
            if (s[i]>='a' and s[i]<='z') or(s[i]>='0' and s[i]<='9') :
                str2 += s[i]
        

        print(str2)

        n = len(str2)

        if n ==1 or n==0:
            return True

        i =0

        while i<=n:
            if str2[i]==str2[n-1]:
                i+=1
                n-=1
            else :
                return False
        

        return True


        
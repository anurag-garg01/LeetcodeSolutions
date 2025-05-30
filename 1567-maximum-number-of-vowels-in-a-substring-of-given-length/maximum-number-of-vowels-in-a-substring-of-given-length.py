class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        maxLen= 0
        i =0
        j =0
        n = len(s)
        cnt =0

        vowelSet = set()

        vowelSet.add('a')
        vowelSet.add('e')
        vowelSet.add('i')
        vowelSet.add('o')
        vowelSet.add('u')

        while j<n:
            if s[j] in vowelSet:
                cnt+=1
            
            if (j-i+1)<k:
                j+=1
            elif (j-i+1==k):
                maxLen = max(maxLen,cnt)
                if s[i] in vowelSet:
                    cnt-=1
                j+=1
                i+=1
        


        return maxLen

            


        
        
        
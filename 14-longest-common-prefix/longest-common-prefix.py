class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        # longest common prefix between these 

        # sort 
        n = len(strs)

        strs.sort()

        str1 = strs[0]

        str2 = strs[n-1]
        res= ""
        i=0

        if n ==1:
            return strs[0]


        while (len(str1)>0 and len(str2)>0 and i<len(str1) and i<len(str2)  and str1[i]==str2[i]):
            res += str1[i]
            i+=1
        

        return res


        
class Solution:
    def firstUniqChar(self, s: str) -> int:
        my_dict = {}

        for i in range(len(s)):
            my_dict[s[i]] = my_dict.get(s[i],0)+1

        
        for i in range(len(s)):
            if my_dict[s[i]]==1:
                return i
        

        return -1
        
        
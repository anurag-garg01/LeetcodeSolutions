class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # return if s and t are valid anagram 

        # both have the same characters with same number of occurence 

        my_dict = {}
        my_dict2 = {}

        for x in s:
            my_dict[x] = my_dict.get(x,0) +1

        for k in t : 
            my_dict2 [k] = my_dict2.get(k,0) +1

        if my_dict==my_dict2:
            return True

        return False

        
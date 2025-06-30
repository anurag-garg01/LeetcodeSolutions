class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # give the length of longest substring without repeating characters 

        # with the help of set 

        # return the length right 

        """
        a - 0
        b - 1
        c - 2


        """


        n = len(s)

        mp = collections.defaultdict(int)


        i =0
        j =0
        ans =0

        while j<n:

            # if element is present in set 
            if s[j] in mp:
                i = mp[s[j]]+1




            # if not present in set 
            mp[s[j]] = j

            ans = max(ans,(j-i+1))

            j+=1



        return ans

        




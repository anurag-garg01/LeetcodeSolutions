class Solution:
    def removeAnagrams(self, words: List[str]) -> List[str]:
        # find the resultant after removing anagrams 

        # sort all the anagrams and then push it in set

        # st = []
        last_sorted = ""
        res = []

        for x in words:

            sorted_word = ''.join(sorted(x))

            # if st:
            #     if st[-1] != x_st:
            #         st.append(x_st)
            #         res.append(x)
            # else :
            #     st.append(x_st)
            #     res.append(x)


            if sorted_word != last_sorted:
                res.append(x)
                last_sorted = sorted_word

        
        return res





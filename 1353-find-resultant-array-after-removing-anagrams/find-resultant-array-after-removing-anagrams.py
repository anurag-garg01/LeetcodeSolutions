class Solution:
    def removeAnagrams(self, words: List[str]) -> List[str]:
        # find the resultant after removing anagrams 

        # sort all the anagrams and then push it in set

        st = []
        res = []

        for x in words:

            x_st = ''.join(sorted(x))

            if st:
                if st[-1] != x_st:
                    st.append(x_st)
                    res.append(x)
            else :
                st.append(x_st)
                res.append(x)
                

            # if x_st not in st:
            #     st.add(x_st)
            #     res.append(x)
            
        
        # while st:
        #     res.append(st[-1])
        #     st.pop()

        

        return res





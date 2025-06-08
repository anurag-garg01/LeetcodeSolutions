class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        # longest common subsequence if equal then take else not take condition 


        "abcde"
        "abc"
        n1 = len(text1)
        n2 = len(text2)

        ind1 = n1-1
        ind2 = n2-1

        dp= [ [-1]*(n2+1) for _ in range(n1+1)]

        def func(ind1, ind2):
            # base case 

            if ind1<0 or ind2<0:
                return 0
            
            if dp[ind1][ind2]!=-1:
                return dp[ind1][ind2]

            # take and not take cases

            if ind1>=0 and ind2>=0 and text1[ind1]==text2[ind2]:
               return ( 1 + func(ind1-1,ind2-1))
            

            # two cases here 
            not_take1 = func(ind1-1,ind2)

            not_take2 = func(ind1,ind2-1)

            dp[ind1][ind2] =  max(not_take1,not_take2)

            return dp[ind1][ind2]


        return func(ind1,ind2)












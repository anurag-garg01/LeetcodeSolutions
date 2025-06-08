class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        # return the total number of unique paths 

        """

        m,n are given check accordingly 




        """


        dp = [ [-1]*n for _ in range(m)]

        
        def func(m,n):

            # base case if 

            if (m<0 or n<0):
                return 0

            # base case 
            if (m==0 and n==0):
                return 1 

            if dp[m][n]!=-1:
                return dp[m][n]
            

            


            # check the two cases

            left = func(m-1,n)

            up = func(m,n-1)


            dp[m][n] =  left + up 

            return dp[m][n]
        

        return func(m-1,n-1)

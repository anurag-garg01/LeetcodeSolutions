class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        n = len(prices)


        dp = [ [-1]*2 for i in range(0,n)]

        def func(ind,buy):

            # base case 
            if ind>=n:
                return 0
            

            if dp[ind][buy] !=-1:
                return dp[ind][buy]
            

            if buy ==1:

                # two cases - can sell or skip 

                dp[ind][buy] =  max(
                    prices[ind] + func(ind+2,0),
                    func(ind+1,1)
                )

                return dp[ind][buy]

            elif buy ==0:
                dp[ind][buy] =  max(
                    - prices[ind] + func(ind+1,1), 
                    func(ind+1,0)
                )
                return dp[ind][buy]

            
        

        return func(0,0)

        
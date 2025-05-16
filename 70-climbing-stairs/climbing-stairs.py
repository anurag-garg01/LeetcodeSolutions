class Solution:

    def func(self, n :int,dp : List[int]) ->int:
        # base cases here 
        if n<=0:
            return 0
            
        if n ==1:
            return 1 
        if n ==2:
            return 2

        if dp[n]!=-1:
            return dp[n]
        
        dp[n]= self.func(n-1,dp) + self.func(n-2,dp)

        return dp[n]


    def climbStairs(self, n: int) -> int:
        # climb stairs 

        # initialize dp here 
        dp = [-1]*(n+1)

        return self.func(n,dp)
        
        
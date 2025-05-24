class Solution:
    def rob(self, nums: List[int]) -> int:
        # house robber probelem 

        n = len(nums)
        # dp = [-1]*(n+1)

        if n==1:
            return nums[0]


        def dfs(ind,start,dp):

            # base case 

            if ind<start:
                return 0
            
            if ind ==start:
                return nums[ind]

            if dp[ind]!=-1:
                return dp[ind]
            

            # take and not take cond 

            # take case 

            take = nums[ind] + dfs(ind-2,start,dp)

            # not take 

            not_take = dfs(ind-1,start,dp)

            dp[ind] = max(take,not_take)

            return dp[ind]

        
        # return  max(dfs(len(nums)-1,1),dfs(n-2,0))
        # case 1 

        dp1 = [-1]*(n+1)
        ans1 = dfs(n-1,1,dp1)

        dp2 = [-1]*(n+1)

        ans2 = dfs(n-2,0,dp2)

        return max(ans1,ans2)


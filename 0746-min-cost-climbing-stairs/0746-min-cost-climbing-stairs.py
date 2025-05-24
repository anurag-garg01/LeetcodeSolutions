class Solution:
    def minCostClimbingStairs(self, nums: List[int]) -> int:

        # return the min cost of climbin trees 

        # either climb one or two steps

        n = len(nums)
        dp = [-1]*(n+1)


        def dfs(ind):

            # base case 

            if ind<0:
                return 0

            if ind ==0:
                return nums[ind]

            if dp[ind]!=-1:
                return dp[ind]
            

            # one step  case 

            one_step = nums[ind] + dfs(ind-1)

            two_step = nums[ind] + dfs(ind-2)

            dp[ind]=  min(one_step,two_step)

            return dp[ind]

        

        return  min(dfs(n-1),dfs(n-2))

        



        
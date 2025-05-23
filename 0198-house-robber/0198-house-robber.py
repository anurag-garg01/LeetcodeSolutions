class Solution:
    def rob(self, nums: List[int]) -> int:
        # house robber

        # take and not_take 

        maxi =0
        n = len(nums)
        sum =0
        dp = [-1]*(n+1)

        def func(ind):

            if ind<0:
                return 0
            
            # take and not_take 

            if(dp[ind]!=-1):
                return dp[ind]


            # not take 
            not_take = func(ind-1)

            # sum += nums[ind]

            #take condn 
            take = func(ind-2) + nums[ind]

            dp[ind] = max(take,not_take)

            return dp[ind]




        return func(n-1)



        
class Solution:
    def maxProfit(self, nums: List[int]) -> int:
        n = len(nums)
        res = -1*float(inf)
        min_till_now = float(inf)
        profit = 0

        for i in range(0,n):
            curr_profit = nums[i] - min_till_now

            res =  max(res,curr_profit)

            if res<0:
                res =0

            min_till_now = min(min_till_now,nums[i])

            
            

        

        return res
        

            




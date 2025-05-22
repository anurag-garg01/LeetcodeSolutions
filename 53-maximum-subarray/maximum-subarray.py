class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # max subarray sum 
        sum =0
        ans = -inf

        for i in range(len(nums)):

            sum += nums[i]

            ans = max(ans,sum)
            if sum <0:
                sum =0
            
        

        return ans
            


        
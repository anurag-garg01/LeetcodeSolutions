class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        # partition equal subset sum 
        # return such that the we can have equal sum 

        sum = 0
        n = len(nums)
        
        for x in nums:
            sum += x
        
        if sum%2!=0:
            return False
        
        target = sum//2

        dp = [[ -1 for _ in range(target+1)] for _ in range(n+1)]


        def func(ind,target):

            # base case 
            if target ==0:
                return True
            
            if ind ==0:
                if target==nums[ind]:
                    return True
                else:
                    return False
            
            if dp[ind][target]!=-1:
                return dp[ind][target]

            # take and not take 
            take = 0
            if nums[ind] <=target:
                take = func(ind-1,target-nums[ind])
            
            # not take
            not_take = func(ind-1,target)


            dp[ind][target] =  take or not_take

            return dp[ind][target]
        


        return func(n-1,target)

        
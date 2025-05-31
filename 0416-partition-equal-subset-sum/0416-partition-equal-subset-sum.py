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

        def func(ind,target):

            # base case 
            if target ==0:
                return True
            
            if ind ==0:
                if target%nums[ind]==0:
                    return True
                else:
                    return False

            # take and not take 
            take = 0
            if nums[ind] <=target:
                take = func(ind-1,target-nums[ind])
            
            # not take
            not_take = func(ind-1,target)


            return take or not_take


        return func(n-1,target)

        
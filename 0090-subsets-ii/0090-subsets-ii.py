class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:

        # solution should be subest without duplicates

        res = []
        temp = []

        def func(ind):

            # base case 
            if ind<0:
                res.append(temp.copy())
                return

            
            # take and not_take cond

           

            temp.append(nums[ind])
            func(ind-1) # take condition
            temp.pop()

            while (ind>0 and nums[ind]==nums[ind-1]):
                ind-=1

            # not_take
            func(ind-1)

            # take cond 



        func(len(nums)-1)

        return res




        
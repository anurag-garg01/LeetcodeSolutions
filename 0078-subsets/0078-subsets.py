class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        # return the subsets 
        res = []
        temp = []
        n = len(nums)

        # take and not take condn 

        def func(ind):
            # res nonlocal

            # if ind<0:
            #     return 

            # base case 
            if ind <0:
                res.append(temp.copy())
                return 

            # take and not_take cond 


            # not_take 
            func(ind-1)

            # take 
            temp.append(nums[ind])
            func(ind-1)
            temp.pop()
            
            


        func(n-1)

        return res
                
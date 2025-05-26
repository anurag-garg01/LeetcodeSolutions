class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        # return all the subsets 
        ans = []
        def func(ind,temp):
            #base case 

            if (ind<0):
                ans.append(temp.copy())
                return 
        

            # take and not take 

            func(ind-1,temp)

            temp.append(nums[ind])
            func(ind-1,temp)
            temp.pop()
        
        func(len(nums)-1,[])

        return ans





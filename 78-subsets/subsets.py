class Solution:

    def backtrack(self, nums: List[int],ind: int, temp :List[int],res :List[List[int]]):
        # base case 
        if ind <0:
            res.append(temp.copy())
            return 
        
        # take and not take 

        # 1. not take 

        self.backtrack(nums,ind-1,temp,res)

        # take condition 
        temp.append(nums[ind])

        self.backtrack(nums,ind-1,temp,res)
        temp.pop()

    def subsets(self, nums: List[int]) -> List[List[int]]:


        # take and not take 

        temp = []
        res = []
        n = len(nums)

        self.backtrack(nums,n-1,temp,res)

        return res
        
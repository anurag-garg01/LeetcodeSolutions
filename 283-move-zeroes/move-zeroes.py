class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        # modify in place 

        n = len(nums)
        j =0

        for i in range(n):
            if nums[i]!=0:
                nums[j]=nums[i]
                j+=1
        

        while j<n:
            nums[j]=0
            j+=1

        
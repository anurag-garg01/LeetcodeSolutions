class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        # search in the insert position 


        # tell the insert position of target in array 
        
        n= len(nums)
        low =0
        high = n-1


        if target > nums[n-1]:
            return n
        
        if target < nums[0]:
            return 0

        while low < high:
            mid = low + (high-low)//2

            if nums[mid]==target:
                return mid
            elif target<nums[mid]:
                high = mid
            else :
                low = mid + 1
        

        return low 



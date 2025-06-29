class Solution:
    def search(self, nums: List[int], target: int) -> int:

        # hust check if the left side is sorted or the right side is sorted 

        n = len(nums)

        if target == nums[0]: # checking first element 
            return 0

        if target == nums[-1]: # checking last element 
            return n-1
        
        low = 0
        high = n-1

        while low<=high:
            mid = low + (high-low)//2

            # check the left sorted and right sorted 
            if nums[mid]==target:
                return mid 
            
            elif nums[low]<=nums[mid]: # left sorted 
                if target>=nums[low] and target <=nums[mid]:
                    high = mid-1
                else :
                    low = mid +1
            else:
                if target>=nums[mid] and target <=nums[high]:
                    low = mid+1
                else :
                    high = mid-1
            
        
        return -1


        
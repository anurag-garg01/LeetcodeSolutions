class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        
        leftMost = -1
        rightMost = -1

        # first element 
        n = len(nums)
        low =0
        high= n-1

        while(low<=high):
            mid = low + (high-low)//2

            if target == nums[mid]:
                leftMost = mid
                high = mid-1
            
            elif target<nums[mid]:
                high = mid-1
            else:
                low = mid+1
        

        low =0
        high= n-1

        while (low<=high):
            mid = low + (high-low)//2
            
            if target == nums[mid]:
                rightMost = mid
                low = mid + 1
            elif target>nums[mid]:
                low = mid+1
            else :
                high = mid-1
        


        return [leftMost,rightMost]

            


        
        
                
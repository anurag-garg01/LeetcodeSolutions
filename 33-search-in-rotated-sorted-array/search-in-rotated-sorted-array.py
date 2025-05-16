class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # search in the rotated sorted array 

        low =0
        n = len(nums)
        high = n-1

        while(low<=high):
            mid = (low + high)//2      # 3, 5

            if (nums[mid]==target):
                return mid
            
            # check the left sorted 

            if(nums[low]<=nums[mid]):
                # left sorted 
                if (nums[low]<=target and target <=nums[mid]):
                    high = mid-1
                else:
                    low = mid+1
            
            else :
                # right sorted 
                if(nums[mid]<=target and target<=nums[high]):
                    low = mid+1
                else :
                    high = mid-1

        return -1 
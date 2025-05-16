class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        # search in rotated sorted array 2 , that can have duplicates 

        # search in rotated sorted array 

         # search in the rotated sorted array 

        low =0
        n = len(nums)
        high = n-1

        while(low<=high):
            mid = (low + high)//2      # 3, 5

            if (nums[mid]==target):
                return True
            
            # check the left sorted 

            if(nums[low]<nums[mid]):
                # left sorted 
                if (nums[low]<=target and target <=nums[mid]):
                    high = mid-1
                else:
                    low = mid+1
            
            elif (nums[mid]<nums[high]) :
                # right sorted 
                if(nums[mid]<=target and target<=nums[high]):
                    low = mid+1
                else :
                    high = mid-1
            else : 
                low+=1

        return False




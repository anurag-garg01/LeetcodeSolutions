class Solution:
    def findMin(self, nums: List[int]) -> int:
        # find minimum in the rotated sorted array 

        # [3, 4, 5, 1, 2]


        # check the edge cases 

        low = 0 
        n = len(nums)
        high = n-1

        ans = inf
        

        while low<=high:
            mid = (low+high)//2

            # left sorted 
            
            if (nums[low]<=nums[mid]):
                ans = min(ans,nums[low])
                low = mid +1
            else : 
                # on the right side 
                ans = min(ans,nums[mid])
                high = mid-1
            

        return ans








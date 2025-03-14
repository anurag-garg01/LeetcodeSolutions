class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # create a map
        hashmap = {} # dictionary 
        n = len(nums)
        for i in range(0,n):
            if (target - nums[i]) in hashmap:
                return [hashmap[target-nums[i]],i]
            hashmap[nums[i]] = i


        return []


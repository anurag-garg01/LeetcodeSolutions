class Solution:
    def carPooling(self, nums: List[List[int]], capacity: int) -> bool:

        temp = [0]*1000
        n = len(nums)

        for arr in nums:
            passengers = arr[0]
            for i in range(arr[1],arr[2]):
                temp[i]+=passengers
                if temp[i]>capacity:
                    return False
        

        return True

        
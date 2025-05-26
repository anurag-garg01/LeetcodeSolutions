class Solution:
    from collections import deque
    import heapq 

    def findKthLargest(self, nums: List[int], k: int) -> int:
        # return the kth largest element in array 
        # min heap 

        

        # hp = deque()
        heap = []

        # min heap 
        n = len(nums)

        for i in range(n):
            heapq.heappush(heap,nums[i])

            while len(heap)>k:
                heapq.heappop(heap)
            
        

        return heapq.heappop(heap)




class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # find the top k frequent elements 

        my_dict = {}
        n = len(nums)

        ans = []

        for i in range(n):
            my_dict[nums[i]]= my_dict.get(nums[i],0)+1
        

        # now have heap 

        import heapq

        heap = []

        # max heap 

        for key,value in my_dict.items():
            heapq.heappush(heap,[-value,key])
        

        while k:
            [value,key] = heapq.heappop(heap)
            ans.append(key)
            k-=1
        

        return ans

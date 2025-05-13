class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        # remove the integers with least occurence 

        my_dict = {}

        for x in arr:
            my_dict[x] = my_dict.get(x,0) + 1

        
        """

            5 : 2
            4 : 1



        """
        # use heap here and get the elements sorted by {val,key}

        # and pop the elements with least val and remove it 

        heap = []

        for key, value in my_dict.items():
            heapq.heappush(heap,[value,key])

        
        

        while heap and heap[0][0]<=k:
            k -= heap[0][0]
            heapq.heappop(heap)
        

        return len(heap)











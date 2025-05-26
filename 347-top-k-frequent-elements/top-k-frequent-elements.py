class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # find the top k frequent elements 

        my_dict = {}
        n = len(nums)

        ans = []

        for i in range(n):
            my_dict[nums[i]]= my_dict.get(nums[i],0)+1
        

        # now have heap 

        # import heapq

        # heap = []

        # # max heap 

        # for key,value in my_dict.items():
        #     heapq.heappush(heap,[-value,key])
        

        # while k:
        #     [value,key] = heapq.heappop(heap)
        #     ans.append(key)
        #     k-=1


        ## Without heap solution 

        # using bucket sort 

        ls = [[] for x in range(n)]

        for key,value in my_dict.items():
            ls[value-1].append(key)
        

        print(ls)

        for i in range(n-1,-1,-1): # iterating in reverse 
            if len(ls[i])>0:
                for j in range (len(ls[i])):
                    if(k>0):
                        ans.append(ls[i][j])
                        k-=1
                    elif(k<=0):
                        return ans

                



        

        return ans

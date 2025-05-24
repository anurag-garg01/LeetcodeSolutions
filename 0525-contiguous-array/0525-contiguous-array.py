class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
       
        for i in range(len(nums)) :
            if nums[i]==0:
                 nums[i] = -1
        

        print(nums)



        # step 2 use map and check the largest window with sum 0 

        my_dict = {}
        
        # my_dict[0] = 0

        sum =0
        ans =0
        i =0

        for i in range(len(nums)):
            sum += nums[i]
            print(f"i = {i}, sum = {sum}")
            if sum ==0:
                ans = max(ans, i +1)
            elif sum in my_dict:
                ans = max(ans,i-my_dict[sum])
            else:
                my_dict[sum]=i
        


        return ans



        # step 3 return ans 



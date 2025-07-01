class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        # find the length of continous longest increasing subsequence 

        cnt =1

        n = len(nums)
        ans =0

        if n ==1:
            return 1 


        for i in range(1,n):
            if nums[i]>nums[i-1]:
                cnt +=1
            else:
                cnt =1
            
            ans = max(ans,cnt)
        

        return ans




        
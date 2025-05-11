class Solution:
    def threeConsecutiveOdds(self, nums: List[int]) -> bool:
        # three consecutive odds 
        cnt = 0

        for i,x in enumerate(nums):
            # if number is odd 
            if x%2 ==0:
                cnt =0
            else:
                cnt+=1
                if cnt>=3:
                    return True
            

        return False
        
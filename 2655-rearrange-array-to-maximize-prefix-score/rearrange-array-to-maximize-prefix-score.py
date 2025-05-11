class Solution:
    def maxScore(self, nums: List[int]) -> int:
        # number of +ve integers in the prefix
        nums.sort()
        numbers = nums[::-1]
        cnt =0

        prefix_list = []
        pre_sum =0
        for x in numbers:
            pre_sum += x
            prefix_list.append(pre_sum)

        

        for x in prefix_list:
            if x>0:
                cnt+=1


        
        return cnt




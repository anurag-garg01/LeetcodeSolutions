class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        # return the total number of subarrays whose sum equal to k 

        """

        0 - 1

        1 - 1 

        3 - 1

        6 - 1


        {sum, occurence}
        """


        n = len(nums)
        ans =0


        my_dict = {}

        my_dict[0] = 1

        sum =0

        for i in range(n):
            sum += nums[i]

            if (sum-k) in my_dict:
                ans += my_dict[sum-k]

            my_dict[sum] = my_dict.get(sum,0) + 1

        

        return ans


































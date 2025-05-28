class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # return the list of product of subarray except self 

        pre_sum = []
        post_sum = []
        n = len(nums)


        """

            [1,2,3,4]

        pre = [1,1,2,6]

        post = [24,12,4,1]



        """

        pre_sum.append(1)
        presum =1
        postsum=1

        post_sum.append(1)

        for i in range (n-1):
            presum *= nums[i]
            pre_sum.append(presum)


        for i in range (n-1,0,-1):
            print
            postsum *= nums[i]
            post_sum.append(postsum)

        # print(post_sum)

        post = post_sum[::-1]

        print(post)

        

        # print(pre_sum)

        ans = []

        for i in range (len(nums)):
            ans.append(pre_sum[i]*post[i])



        return ans
            




        
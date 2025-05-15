class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        """


        [7,6,5,4,3,2,1]

        [5,6,7,1,2,3,4]






        """
        n = len(nums)
        k = k%n




        nums.reverse()
        temp = k

        print(nums)
        temp = k-1


        while(k<=n-1):
            nums[k],nums[n-1] = nums[n-1],nums[k]
            k+=1
            n-=1
        

        i = 0 
       
        while i<=temp:
            nums[i], nums[temp] = nums[temp],nums[i]
            i+=1
            temp-=1
        

        # print(nums)

        


        

        
        
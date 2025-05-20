class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """

        # sort from the end 

        # [2,5,6]

        # nums1  = [1,2,2,3,5,6]
        j = m+n-1
       

        while m>0 and n>0 :
            if (nums1[m-1]>=nums2[n-1]):
                nums1[j]= nums1[m-1]
                j-=1
                m-=1
            else :
                nums1[j] = nums2[n-1]
                j-=1
                n-=1

        print(nums1)


        
        while n>0:
            nums1[j]= nums2[n-1]
            j-=1
            n-=1
        
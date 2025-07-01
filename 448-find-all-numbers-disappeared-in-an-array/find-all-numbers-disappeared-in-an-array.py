class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        st = set()
        res = []
        n = len(nums)

        for i in range(1,n+1):
            st.add(i)
        
        for i in range(len(nums)):
            if nums[i] in st:
                st.remove(nums[i])
        


        for x in st:
            res.append(x)
        

        return res
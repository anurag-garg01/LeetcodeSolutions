class Solution:
    def hammingWeight(self, n: int) -> int:
        # n&(n-1) removes the lowest set bit 
        ans =0
        while n:
                n = n&(n-1)
                ans+=1
            
        

        return ans
        

        
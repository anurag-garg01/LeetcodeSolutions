class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        # return the solution 


        # 0 to 12-1 = 11 

        """
            mid = 5,

            row = 3
            col = 4

            5/4 , 5%4
        """


        low =0
        rows = len(matrix) # 1 
        cols = len (matrix[0]) # 2 
        high = rows*cols-1 # 1 

        while(low<=high):
            mid = (low+high)//2

            # print 

            print(f"mid : {mid}, rows= {rows}")

            if(matrix[mid//cols][mid%cols]==target):
                return True
            
            elif (matrix[mid//cols][mid%cols]<target):
                low = mid+1
            else :
                high= mid -1
        

        return False

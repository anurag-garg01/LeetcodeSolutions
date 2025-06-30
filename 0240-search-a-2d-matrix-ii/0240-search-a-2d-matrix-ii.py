class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        """ return the element in the matrix """
        row =0

        col = len(matrix[0])-1

        while row< len(matrix) and col>=0 :
            if matrix[row][col] == target:
                return True
            elif target < matrix[row][col]:
                col-=1
            else:
                row +=1
        

        return False


        
        
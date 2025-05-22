class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows = len(matrix)
        columns = len(matrix[0])

        for i in range(rows):
            for j in range(i+1,columns):
                # if(i<j):
                    matrix[i][j],matrix[j][i] = matrix[j][i], matrix[i][j]



        for i in range(rows):
            matrix[i].reverse()


         
        
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // failed so many times in this question gonna try again 
        
        int m = matrix.size();
        int n = matrix[0].size();
        
      //  cout<<m<<n;
        int start = 0;
        int end = m*n -1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            cout<<mid;
            if(matrix[mid/n][mid%n]==target)
                return true;
            
            else if(matrix[mid/n][mid%n]<target){
                start = mid + 1 ;
                cout<<start;
            }
            else {
                end = mid -1 ;
            }
        }
        
        
        return false;
    }
};
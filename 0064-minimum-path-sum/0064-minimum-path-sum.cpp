class Solution {
public:
    
    int recursive(vector<vector<int>> &grid,int i,int j,vector<vector<int>> &dp)
    {
        // base case 
        if(i==0 && j==0){
            // we have reached the base case 
            return grid[i][j];
        }
        // here's we get the out of bound conditions 
        if(i<0 || j<0 )
            // here we cannot use INT_MAX coz below in the code we will have                    something + to int_max that will give overflow 
            return 1e9;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
       int up = grid[i][j] + recursive(grid,i-1,j,dp);
        int left = grid[i][j] +recursive(grid,i,j-1,dp);
            
            return dp[i][j] = min(up,left);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        // path from top left to bottom right suhc that the sum of number is              minimum
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
      //  int dp[n+1][m+1];
        //memset(dp,-1,sizeof(dp));
        return recursive(grid,n-1,m-1,dp);
    }
};
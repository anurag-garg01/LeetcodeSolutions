class Solution {
public:
    int func(vector<vector<int>> grid, int m , int n,vector<vector<int>> &dp){
        // out of bounds scenario 
        if(m<0 || n<0){
            return 1e9;
        }

        // base case 
        if(m==0 && n==0){
            return grid[m][n];
        }

        if(dp[m][n]!=-1){
            return dp[m][n];
        }



        // take and not_take condn 
        int left = 1e9;
        if(n-1>=0){
         left = grid[m][n] + func(grid,m,n-1,dp);
        }
        int up = 1e9;
        // not_take 
        if(m-1>=0){
         up  = grid[m][n] + func(grid,m-1,n,dp);
        }


        return dp[m][n] = min(left,up);


    }
    int minPathSum(vector<vector<int>>& grid) {
        // return the maximum path sum 

        // take or not_take 
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m,vector<int>(n,-1));

        
        return func(grid, m-1,n-1,dp);

    }
};
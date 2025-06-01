class Solution {
public:

    int func(vector<int> nums, int amount, int ind, vector<vector<int>>& dp) {
        // base case

        if (ind == 0) {
            if (amount % nums[0] == 0) {
                // return amount / nums[0];
                return 1;
            } else {
                return 0;
            }
        }

        // take and not take condition

        if (dp[ind][amount] != -1) {
            return dp[ind][amount];
        }

        // not_take
        int not_take = func(nums, amount, ind - 1,dp);

        // take condn
        int take = 0;
        if (nums[ind] <= amount) {
            take = func(nums, amount - nums[ind], ind,dp);
        }

        return dp[ind][amount] = (take +  not_take);
    }


    int change(int amount, vector<int>& nums) {
        // return the total number of ways ,we can get the total with the coins
         int n = nums.size();

        vector<vector<int>> dp(n+1, vector<int>(amount + 1, -1));

        int ans = func(nums, amount, n - 1, dp);

        // if (ans >= 1e9)
        //     return 0;

        return ans; // Return the minimum number of elements needed
    }
};
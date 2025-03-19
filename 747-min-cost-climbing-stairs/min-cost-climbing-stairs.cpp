class Solution {
public:
    int func(vector<int> nums, int ind,vector<int> &dp) {

        // base case

        if (ind < 0) {
            return INT_MAX;
        }

        if (ind == 0) {
            return nums[0];
        }

        if (ind == 1) {
            return nums[1];
        }

        if(dp[ind]!=-1){
            return dp[ind];
        }

        // one or  two steps

        int one = nums[ind] + func(nums, ind - 1,dp);

        int two = INT_MAX;

        if (ind - 2 >= 0) {
            two = nums[ind] + func(nums, ind - 2,dp);
        }

        return dp[ind] = min(one, two);
    }

    int minCostClimbingStairs(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);


        return min(func(nums, n - 1,dp), func(nums, n - 2,dp));
    }
};
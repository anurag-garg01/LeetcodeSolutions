class Solution {
public:
    int func(vector<int> nums, int ind,vector<int> &dp) {
        // base case

        if (ind == 0) {
            return nums[ind];
        }

        if (ind < 0) {
            return 0;
        }

        // take and not take

        // not_take

        if(dp[ind]!=-1){
            return dp[ind];
        }

        int not_take = func(nums, ind - 1,dp);

        int take = INT_MIN;

        // take
        if (ind - 2 >= 0) {
            take = nums[ind] + func(nums, ind - 2,dp);
        }

        return dp[ind] = max(take, not_take);

        // write the DP here
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        

        return func(nums, n - 1,dp);
    }
};
class Solution {
public:


    int solve(vector<int>&nums, int ans, int idx,vector<int>&dp){
        
       
        // if(idx==0)
        //     return nums[0];

        if(idx<0)
            return 0;


        if(dp[idx]!=-1)
            return dp[idx];

        // taken or not taken 

        int taken = nums[idx] + solve(nums, ans, idx-2,dp);

        int nottaken =  solve(nums,ans,idx-1,dp);


        return dp[idx]=max(taken,nottaken);    
    }


    int rob(vector<int>& nums) {

        // if two adjacent houses can not be robed at the same time

        int ans =0;
        vector<int> dp(nums.size()+1,-1);
        return solve(nums,ans,nums.size()-1,dp);


        
    }
};
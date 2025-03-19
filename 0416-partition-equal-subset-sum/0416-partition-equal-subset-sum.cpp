class Solution {
public:
    bool func(vector<int> & nums, vector<vector<int>> &dp,int target,int index){
        
        if(target==0){
            return true;
        }
        if(index<0){
            return  false;
        }

        if(index==0){
            if(target==nums[0]){
                return true;
            }
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }

        bool not_take = func(nums,dp,target,index-1);

        // take or not take 
        bool take = false;
        if(nums[index]<=target){
            take = func(nums,dp,target-nums[index],index-1);
        }

        
        return dp[index][target] = take || not_take;


    }




    bool canPartition(vector<int>& nums) {
        // convert into subsets 
        int n = nums.size();
        long long int sum =0;
        for(auto k : nums){
            sum += k;
        }

        if(sum%2!=0){
            return false;
        }
        int target = sum/2;

        vector<vector<int>> dp(n,vector<int>(target+1,-1));

        return func(nums,dp,target,n-1);


    }
};
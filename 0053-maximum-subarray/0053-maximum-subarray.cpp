class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // find the maximum sum subarray 
        
        int sum =0;
        int ans = INT_MIN;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            ans = max(sum,ans);
            
            if(sum<0)
                sum=0;
        }
        
        
        return ans;
    }
};
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extraCandies) {
        vector<bool> ans;
        int maxi = INT_MIN;
        int n = nums.size();

        for(auto k : nums){
            maxi = max(k,maxi);
        }

        cout<<maxi;
        for(int i =0;i<n;i++){
            if(nums[i] + extraCandies>=maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

        return ans;

    }
};
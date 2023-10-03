class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // use map 
        unordered_map<int,int> mp;
        int ans =0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                ans += mp[nums[i]];
            }
            mp[nums[i]]++;
        }


        return ans;
    }
};
class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        // find the longest equal subarray after deleting atmost k elements 

        int i =0;
        int j =0;
        int n = nums.size();
        int maxfreq =0;

        unordered_map<int,int> mp;

        for(int j =0;j<n;j++){
            
            mp[nums[j]]++;
             maxfreq = max(maxfreq,mp[nums[j]]);
            if(j-i+1 -maxfreq>k){
                --mp[nums[i++]];
            }
           
        }
        return maxfreq;
    }
};
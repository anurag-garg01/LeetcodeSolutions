class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // floor and ceil concept 
        
        unordered_map<int,int> mp;
        
        int n = nums.size();
        
        vector<int> ans;
        
        for(auto x : nums){
            mp[x]++;
        }
        
        
        for(auto k : mp){
            int t = k.second;
            
            if(t>floor(n/3))
            {
                ans.push_back(k.first);
            }
        }
        
        
        return ans;
    }
};
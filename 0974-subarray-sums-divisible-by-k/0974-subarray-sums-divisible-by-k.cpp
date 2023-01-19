class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // what are we storing in the hash table 
        // how are we going to use the prefix sum 
        
        // very good question
        
        vector<int> presum;
        int n = nums.size();
        
        unordered_map<int,int> mp;
        
        int s = 0;
        for(int i =0;i<n;i++){
            s+=nums[i];
            presum.push_back(s);
        }
        
        
        vector<int>rem;
        
        for(auto x : presum){
            int remainder = x%k;
            if(remainder<0)
                remainder+=k;
            rem.push_back(remainder);
        }
        
        mp[0]=1;
        int ans =0;
        for(auto t : rem){
            if(mp.find(t)==mp.end()){
                mp[t]++;
            }
            else{
                ans+= mp[t];
                mp[t]++;
            }
        }
        
        return ans;

    }
};
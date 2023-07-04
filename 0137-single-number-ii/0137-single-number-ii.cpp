class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto k : nums){
            mp[k]++;
        }


        for(auto x : mp){
            if(x.second ==1)
            return x.first;
        }

        return 0;


    }
};
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        // group size is 3 and so on 

        vector<vector<int>> ans;
        int n = groupSizes.size();
        /* 
        2 -> {0}

        */


        unordered_map<int,vector<int>> mp;

        for(int i =0;i<n;i++){
            mp[groupSizes[i]].push_back(i);

            if(mp[groupSizes[i]].size()==groupSizes[i]){
                ans.push_back(mp[groupSizes[i]]);
                mp.erase(groupSizes[i]);
            }
            
        }
        



        return ans;

    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;

        // return the k most frequent elements

        // Method 1 - create map , put it inot priority queue and get the top k
        // most frequent elements

        // Method 2 - // nums[i]

        // create map

        int n = nums.size();

        for (auto x : nums) {
            mp[x]++;
        }

        /*
            1 - 3
            2 - 2
            3 - 1
        */

        // put it into bucket sort

        vector<vector<int>> arr(n+1);

        for (auto& [key, val] : mp) {
            arr[val].push_back(key);
        }

        for (int i = n ; i >= 0; i--) {
            if (arr[i].size() != 0) {
                if (k > 0) {
                    for (auto x : arr[i]) {
                        if (k > 0) {
                            ans.push_back(x);
                            k--;
                        }
                    }
                }
            }
        }

        return ans;
    }
};
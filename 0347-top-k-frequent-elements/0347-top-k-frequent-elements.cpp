class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
           	// solving using bucket sort 
            vector<int> ans;
           	// create a map 
            unordered_map<int, int> mp;

            for (auto x: nums)
            {
                mp[x]++;
            }

            vector<vector < int>> buckets(nums.size() + 1);
            for (auto[a, b]: mp)
            {
                buckets[b].push_back(a);
            }

           	// last step is to get elements from buckets 

            for (int i = nums.size(); i >= 0; i--)
            {
                if (buckets[i].size() != 0)
                {
                    for (auto t: buckets[i])
                    {
                        if (k != 0)
                        {
                            ans.push_back(t);
                            k--;
                        }
                    }
                }
            }
            
            return ans;
        }
};
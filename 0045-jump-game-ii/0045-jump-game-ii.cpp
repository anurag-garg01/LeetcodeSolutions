class Solution
{
    public:
        int jump(vector<int> &nums)
        {
            // dp ka question hai but most optimized soln greedy hai iska 
            
            int ans = 0;
            int n = nums.size();
            int l = 0;
            int r = 0;
            int farthest = 0;
            
            while (r < n - 1)
            {
                for(int i=l ; i<r+1;i++)
                    farthest = max(farthest, nums[i] + i);
                l = r + 1;
                r = farthest;
                ans += 1;
            }
            return ans;
        }
};
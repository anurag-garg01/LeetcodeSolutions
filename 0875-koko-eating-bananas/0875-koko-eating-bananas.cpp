class Solution
{
    public:
        int minEatingSpeed(vector<int> &nums, int h)
        {
           	// return minimum eating speed 
           	// k would be in range 1 to max 

            long long int max = INT_MIN;

            for (auto k: nums)
            {
                if (k >= max)
                {
                    max = k;
                }
            }

            long long int low = 1;
            long long int high = max;

          //   sort(nums.begin(), nums.end());

            int n = nums.size();
            long long int ans = 0;
            
            while (low <= high)
            {

                long long int mid = low + (high - low) / 2;
                long long int cnt = 0;

                for (int i = 0; i < n; i++)
                {
                    if (nums[i] % mid == 0)
                    {
                        cnt += nums[i] / mid;
                    }
                    else
                    {
                        cnt = cnt + (nums[i] / mid + 1);
                    }
                }
                if (cnt <= h)
                {
                    ans = mid;
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            return ans;
        }
};
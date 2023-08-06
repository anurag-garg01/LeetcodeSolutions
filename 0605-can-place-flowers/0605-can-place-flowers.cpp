class Solution
{
    public:
        bool canPlaceFlowers(vector<int> &nums, int n)
        {
           	// can be planted or not
            int size = nums.size();
            int cnt =0;
            for (int i = 0; i < size; i++)
            {
                if ((i == 0 || nums[i - 1] == 0) && nums[i] == 0 && (i == size - 1 || nums[i + 1] == 0))
                {
                    cnt++;
                    nums[i]=1;
                }
            }
            cout<<cnt;
            if (cnt >= n)
                return true;

            return false;
        }
};
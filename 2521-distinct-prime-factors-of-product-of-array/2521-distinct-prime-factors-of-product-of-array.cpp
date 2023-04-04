class Solution
{
    public:
        int distinctPrimeFactors(vector<int> &nums)
        {
           	// cant directly multiply as it would give tle range would go > 10^9
           	// shi hai go one by one max it would be 10^7
            set<int> s;

            int j;
            for (auto x: nums)
            {
                for (int i = 1; i <= x; i++)
                {
                    if (x % i == 0)// checks whether it is a factor 
                    {
                        for (j = 2; j < i; j++)// checks prime
                        {
                            if (i % j == 0)
                            {
                                break;
                            }
                        }
                        if (j == i)
                        {
                            s.insert(i);
                        }
                    }
                }
            }

            for (auto t: s)
            {
                cout << t << " ";
            }

            return s.size();
        }
};
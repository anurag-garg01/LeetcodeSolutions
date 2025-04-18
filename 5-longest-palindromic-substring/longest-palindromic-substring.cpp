class Solution
{
    public:
        string longestPalindrome(string s)
        {
           	// return the largest palindromic substring 

            string res = "";
            int reslen = 0;
            int n = s.size();

            for (int i = 0; i < n; i++)
            {
                int l = i;
                int r = i;
               	// for odd case 
                while (l >= 0 && r < n && s[l] == s[r])
                {
                    if ((r - l + 1) > reslen)
                    {
                        res = s.substr(l, r-l + 1);
                        reslen= (r-l+1);
                    }
                    l--;
                    r++;
                }

               	// for even length
                l = i;
                r = i + 1;
                while (l >= 0 && r < n && s[l] == s[r])
                {
                    if ((r - l + 1) > reslen)
                    {
                        res = s.substr(l, r-l + 1);
                        reslen = (r-l+1);
                    }
                    l--;
                    r++;
                }
            }

            return res;
        }
};
class Solution
{
    public:
        string reverseWords(string s)
        {

           	// here's the o(1) space solution without sstream 

            string res;
            int i = 0;
            int j = 0;
            int n = s.size();

            while (i < n)
            {

                while (i < n && s[i] == ' ')
                {
                    i++;
                }

                if (i == n)
                    return res;

                j = i + 1;

                while (j < n and s[j] != ' ')
                {
                    j++;
                }

                string temp = s.substr(i, j - i);

                if (res.size() == 0)
                {
                    res = temp;
                }
                else
                {
                    res = temp + " " + res;
                }

                i = j + 1;
            }

            return res;
        }
};
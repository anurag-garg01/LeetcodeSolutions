class Solution
{
    public:
        int strStr(string haystack, string needle)
        {
           	// return index of first occurence of word 2 in word 1 
            int n = haystack.size();
            int j = 0;
            int temp;
            for (int i = 0; i < n; i++)
            {
                while (i < n && needle[j] != haystack[i])
                {
                    i++;
                }
                if (i == n)
                {
                    return -1;
                }
                else
                {
                    temp = i;
                    while (j < needle.size() && i < n && haystack[i] == needle[j])
                    {
                        i++;
                        j++;
                    }
                    if (j == needle.size())
                    {
                        cout << temp;
                        return temp;
                    }
                    else
                    {
                        i = temp;
                        j = 0;
                    }
                }
            }
            return -1;
        }
};
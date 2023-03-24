class Solution
{
    public:
        bool rotateString(string s, string goal)
        {
           	// is one string rotation of other string check that 
           	// tc : o(n)  | sc : o(n)
           	// string matching algorithm 
            if(s.size()!=goal.size())
                return false;
            s = s + s;
            int j = 0;
            for (int i = 0; i < s.size(); i++)
            {
                int temp = i;
                if (s[i] == goal[j])
                {
                    while (i < s.size() && s[i] == goal[j])
                    {
                        i++;
                        j++;
                    }
                }

                if (j == goal.size())
                {
                    return true;
                }
                else
                {
                    j = 0;
                    i = temp;
                }
            }
            return false;
        }
};
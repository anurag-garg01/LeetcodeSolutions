class Solution
{
    public:
        int maxDepth(string s)
        {
           	// what is the max nesting that has been done to store the element 

           	//stack could be used 

           	// return the max size of stack
           	// tc :o(n)   | sc:o(n)
            int open = 0;
            int ans = 0;
            stack<char> st;

            for (int i = 0; i < s.size(); i++)
            {
                char ch = s[i];

                if (ch == '(')
                {
                   	// st.push(ch);
                    open++;
                   	// ans = max(ans,st.size());
                    // if (st.size() >= ans)
                    // {
                    //     ans = st.size();
                    // }
                    if(open>=ans)
                    ans = open; 
                }
                else if (ch == ')')
                {
                    open--;
                }
            }

            return ans;
        
        }
};
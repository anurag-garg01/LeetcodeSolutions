class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0;

        // [-1,0,1]
        stack<int> st;
        int maxi = 0;

        // add an element -1 in the stack in the beginning

        st.push(-1);

        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                st.pop();

                if (st.empty()) {
                    st.push(i);
                } else {
                    // stack is not empty
                    // take the max value
                    maxi = max(maxi, (i - st.top()));
                }
            }
        }

        return maxi;
    }
};
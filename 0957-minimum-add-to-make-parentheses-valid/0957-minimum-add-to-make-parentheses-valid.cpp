class Solution {
public:
    int minAddToMakeValid(string s) {
        // Minimum addittions to make the parenthestis alid again 

        // stack 


        stack<int> st;
        int ans = 0;
        int n = s.size();
        for(int i =0;i<n;i++){
            // if(s[i]=='(')
            //     st.push('(');
            
            if(s[i]==')' && !st.empty() && st.top()=='('){
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }



        ans = st.size();



        return ans;



    }
};
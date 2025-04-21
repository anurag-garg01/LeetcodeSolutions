class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;

        // tc : o(n) && sc : o(n)

        // Add a stack 
        stack<int> st;
        // [5,10,-5]
        for(int ast : asteroids){
            bool destroyed = false;

            while(!st.empty() && ast<0 && st.top()>0){
                // check the top element with asteroid
                if(st.top() < -1* ast){
                    st.pop();
                    continue;
                }
                else if (st.top()==-1*ast){
                    st.pop();
                }

                destroyed = true;
                break;
            }

            if(!destroyed)
                st.push(ast);

            // [5,10,]


        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        
        }


        reverse(ans.begin(),ans.end());

        return ans;
    }
};
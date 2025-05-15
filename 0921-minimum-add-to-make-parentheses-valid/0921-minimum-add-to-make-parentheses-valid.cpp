class Solution {
public:
    int minAddToMakeValid(string s) {
        // int open = 0;

        // int res = 0;

        // int close = 0;

        // stack<char> st;

        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '(') {
        //         st.push(s[i]);
        //     }

        //     else {
        //         if (st.empty()) {
        //             res++;
        //         }

        //         else if (!st.empty() && st.top() == '(') {
        //             st.pop();
        //         }
        //     }
        // }

        // return res + st.size();


        // this is without the stack 

        int open = 0;
        int close = 0;

        int n = s.size();

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
            }
            else if (s[i]==')')
            {
                if(open>0){
                open--;
            }
            else{
                close ++;
            }
            }
        }


        return open + close;



    }
};
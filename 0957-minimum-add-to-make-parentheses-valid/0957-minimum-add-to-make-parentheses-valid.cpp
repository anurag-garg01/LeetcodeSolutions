class Solution {
public:
    int minAddToMakeValid(string s) {


       //  solving without any extra space and in O(1) space
       // could it be done in o(1) space ???
       int left =0;
       int right = 0;

       for(char ch : s){
           if(ch=='(')
            right++;
            else if(ch==')' && right>0){
                right--;
       }
       else {
           left++;
       }


    
       }

       return left + right;









        // // Minimum addittions to make the parenthestis alid again 

        // // stack used and solved in O(n)



        // stack<int> st;
        // int ans = 0;
        // int n = s.size();

        // for(int i =0;i<n;i++){
        //     // if(s[i]=='(')
        //     //     st.push('(');
            
        //     if(s[i]==')' && !st.empty() && st.top()=='('){
        //         st.pop();
        //     }
        //     else {
        //         st.push(s[i]);
        //     }
        // }

        // ans = st.size();

        // return ans;



    }
};
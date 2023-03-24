class Solution {
public:
    int maxDepth(string s) {
        // what is the max nesting that has been done to store the element 
        
        //stack could be used 
        
        // return the max size of stack
        int ans =0;
        stack<char> st;
        
        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            
            if(ch=='('){
                st.push(ch);
               // ans = max(ans,st.size());
                if(st.size()>=ans){
                    ans = st.size();                }
            }
            
            else if(ch == ')'){
                st.pop();
            }     
       }
        
        
        return ans;
    }
};
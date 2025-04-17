class Solution {
public:
    int longestValidParentheses(string s) {
        // return the longest valid parentheses in string s 
        int left =0;
        int right =0;

        int maxi =0;



        int n = s.size();


        for(int i =0;i<n;i++){
            if(s[i]=='('){
                left++;
            }
            else {
                right++;
            }

            if(left==right){
                maxi = max(maxi,left*2);
            }
            else if(right>left){
                left =0;
                right =0;
            }
        }


        left =0;
        right =0;



        for(int i =n-1;i>=0;i--){
            if(s[i]=='('){
                left++;
            }
            else {
                right++;
            }

            if(left==right){
                maxi = max(maxi,right*2);
            }
            else if(left>right){
                left =0;
                right =0;
            }
        }

        return maxi;


        
    }
};
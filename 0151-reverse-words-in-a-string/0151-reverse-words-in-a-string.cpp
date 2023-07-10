class Solution {
public:
    string reverseWords(string str) {
        // the sky is blue => blue is the sky 


        stringstream s(str);

        string word;
        
        string ans ;

        while(s>>word){
            ans = word + " " + ans;
        }

        //reverse(ans.begin(),ans.end());
        // ans = ans - " ";    
        
        int n = ans.size();

        return ans.substr(0,n-1);

    }
};
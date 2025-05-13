class Solution {
public:
    string breakPalindrome(string palindrome) {
        // make the strinf smallest lexicographically 
        // case : n odd and mid element check it carefully
        // using two pointers
        string ans = palindrome;
        
        int i =0;
        int j = palindrome.size()-1;
        if(palindrome.size()<=1)
            return "";
        // if(palindrome == "aa")
        //     return "ab";
        while(i<j){
            
            if(ans[i]!='a')
            {ans[i]='a';
             break;}
            i++;
            j--;
        }
        if(i>=j){
            if(ans[0]=='a')
            { ans[palindrome.size()-1]='b';
            }  
        }
        return ans;
    }
};
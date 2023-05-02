class Solution {
public:
    bool ispalindrome(string s,int l, int r){
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
               
            }
             l++;
            r--;
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        // greedy solution 
        int n = s.size();
        bool pend = true;
        int l =0;
        int  r = n-1;
        while(l<r){
           // if(r-l==1 && pend == true return true;)
            
            if(s[l]!=s[r]){
                return (ispalindrome(s,l+1,r) || ispalindrome(s,l,r-1));
            }
            l++;
            r--;            
            
        }
        
        
        
        return true;
        
        
    }
};
class Solution {
public:
    void reverse(string s, string &ans,int i , int j ){
        for(int k = j;k>=i;k--){
            ans += s[k];
        }
        ans += ' ';

    }
    string reverseWords(string s) {
        // preserve the white spaces
        

        string ans;
        int j =0;
        int n = s.size();


        if(n==1)
            return s;
        
        int i=0;
        while(j<n){
            while(j<n && s[j]!=' '){
                j++;
            }
            
            reverse(s,ans,i,j-1);
            
            i = j+1;
            j++;
        }



        return ans.substr(0,ans.size()-1);
    }
};
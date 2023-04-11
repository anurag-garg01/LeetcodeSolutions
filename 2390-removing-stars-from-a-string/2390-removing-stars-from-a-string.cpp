class Solution {
public:
    string removeStars(string s) {
        // use stack and normal linear space solution without space 
        
        // leet**cod*e
        // 
        
        int i=0;
        int j =0;
        
        
        for(int i =0;i<s.size();i++){
            if(s[i]!='*'){
                s[j]=s[i];
                j++;
            }
            else if(s[i]=='*'){
                j--;
            }
        }
        
        return s.substr(0,j);
    }
};
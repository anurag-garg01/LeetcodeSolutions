class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        // use map and solve 
        //tc : o(n) && sc;o(n)
        
        unordered_map<char,char> mpf;
        unordered_map<char,char> mps;
        
        for(int i =0;i<s.size();i++){
            if(mpf.find(s[i])!=mpf.end() && mpf[s[i]]!=t[i])
            {
                return false ;
            }
            else {
                mpf[s[i]] = t[i];
            }
            
            if(mps.find(t[i])!=mps.end() && mps[t[i]]!=s[i])
            {
                return false ;
            }
            else {
                mps[t[i]] = s[i];
            }
        }
        
        
        
        
        return true;
    }
};
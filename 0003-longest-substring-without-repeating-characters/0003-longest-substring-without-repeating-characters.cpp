class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // uisng map 
        
        unordered_map<char,int> mp;
        
        int maxlen = INT_MIN;
        int left=0;
        int right =0;
        
        
        while(right<s.size()){
            char ch = s[right];
            
            if(mp.count(ch)){
                maxlen = max(maxlen,right-left);
                left = max(left,mp[ch]+1);
               
            }
            
            mp[ch]=right;
            right++;
        }
        
        return max(maxlen,right-left);
        
        
        // using set 
        
//         // return the longest substring without repeating chars 
//         set<char> st;
        
//         int l =0;
//         int n = s.size();
//         int ans = 0;
        
//         for(int r=0;r<n;r++){
//             // if s[r] is in set
//             while(st.find(s[r])!=st.end());
//             {
//                 st.erase(s[l]);
//                 l++;
//             }
            
//             st.insert(s[r]);
            
//             ans = max(ans,r-l+1);
//         }
        
//         return ans;
    }
};
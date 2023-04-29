class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        string temp ="[.]";
        int n = address.size();
        
        for(int i =0;i<n;i++){
            if(address[i]!='.'){
                ans += address[i];
            }
            else 
                ans += temp;
        }
        
        
        return ans;
    }
};
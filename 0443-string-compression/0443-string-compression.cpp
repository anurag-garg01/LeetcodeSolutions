class Solution {
public:
    int compress(vector<char>& chars) {
        // tc :o(n) && sc:o(n)
        string ans;
        int n = chars.size();
        
        for(int i =0;i<chars.size();i++){
            
            char temp = chars[i];
            int cnt =0;
            
            while(i<n && temp == chars[i]){
                cnt++;
                i++;
            }
            
            if(cnt==1){
                ans += temp;
            }
            else {
                ans += temp  + to_string(cnt);
            }
            
            i--;
            
            
        }
        
        cout<<ans<<endl;
        for(int i =0;i<ans.size();i++){
            chars[i]=ans[i];
        }
        return ans.size();
    }
    
};
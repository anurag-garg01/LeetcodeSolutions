class Solution {
public:
    string reverseWords(string str) {
        // tc : o(n) sc : o(n)
        vector<string> vec;
        
        string ans = "";
        
       stringstream s(str);
        
        string word;
        
        
        while(s>>word){
            vec.push_back(word);
        }
        
       for(int i =vec.size()-1;i>=0;i--){
           if(i!=0)
           {
               ans += vec[i] + " ";
           }
           else {
               ans += vec[i];
           }
           
       }
        
        
        
        return ans;
        
    }
};
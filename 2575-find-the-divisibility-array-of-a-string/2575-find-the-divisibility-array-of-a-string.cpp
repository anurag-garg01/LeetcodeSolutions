class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        
        // can be understood from explainations only 
        
        long long int rem =0;
        long long int n = word.size();
        vector<int> ans;
        
        for(int i =0;i<n;i++){
            
            long long int num;
            num = word[i]-'0';
            num += rem*10;
            
            if(num%m==0){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
            
            rem = num%m;
        
        }
        
        return ans;
        
        // this method gives tle 
        // so we have to use remainder trick here 
        
//         vector<int> ans;
//         // hidden trick is there which I am unable to find 
        
//         long long int num =0;
//         int modulo = 1e9;
//         for(int i=0;i< word.size();i++){
//             num = num*10%modulo + (word[i]-'0')%modulo;
//             // string str = word.substr(0,i);
//             // cout<<str;
//             // int num = stoi(str);
            
//             if(num%m==0){
//                 ans.push_back(1);
//             }
//             else {
//                 ans.push_back(0);
//             }
//         }
        
//         return ans;
    }
};
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        // how sliding window - and we have to return the max amount we can hold 
        // tc : o(n)  sc : o(n)
        int l =0;
        int total=0,result =0;
        int n = fruits.size();
        
        unordered_map<int,int> mp;
        for(int r =0;r<n;r++){
            
            mp[fruits[r]]++;
            total +=1;
            
            while(mp.size()>2){
                mp[fruits[l]]--;
                total = total - 1;
                if(mp[fruits[l]]==0)
                    mp.erase(fruits[l]);
                l++;
                
            }
            
            
            result = max(result,total);
            
        }
        
        
        
        return result;
    }
};
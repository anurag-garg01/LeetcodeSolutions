class Solution {
public:
    string frequencySort(string s) {
        
        string ans="";
        
        
        // max heap as we need max elements 
        
        priority_queue<pair<int,char>> maxheap;
        
        unordered_map<char,int> mp;
        
        for(auto x : s){
           mp[x]++; 
        }
        
        for(auto k :mp ){
            maxheap.push({k.second,k.first});
        }
        
        while(maxheap.size()>0){
            int cnt = maxheap.top().first;
            while(cnt!=0){
                ans+=maxheap.top().second;
                cnt--;
            }
            maxheap.pop();
        }
    
        

        return ans;
    }
};
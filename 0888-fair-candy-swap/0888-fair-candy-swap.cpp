class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        // tc : o(n)  sc: o(n)
        vector<int> ans(2);
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int s1=0;
        int s2=0;
        
        
        for(auto x : a){
            s1 += x;
        }
        
        
        for(auto y : b){
            s2 += y; 
        }
        
      set<int> s;
        
        for(auto k : b){
            s.insert(k);
        }
        
        for(int i =0;i<a.size();i++){
            if(s.find(a[i]+(s2-s1)/2)!=s.end()){
                return {a[i],a[i]+(s2-s1)/2};
            }
        }
        
        return ans;
        
        
    }
};
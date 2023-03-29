class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int w) {
         // tc : o(nlogn)  sc : o(n)
        
        // base case to check factor of groupsize
        int n = hand.size();
        
        if(hand.size()%w!=0)
            return false;
        
        map<int,int> m;
        
        for(auto k : hand){
            m[k]++;
        }
        
        
        while(!m.empty()){
            
            int curr = m.begin()->first;
            
            
            for(int i =0;i<w;i++){
                
                if(m.find(curr+i)==m.end()){
                    return false;
                }
                
                m[curr+i]--;
                
                if(m[curr+i]==0){
                    m.erase(curr+i);
                }
                
            }
        }
        return true;
    }
};
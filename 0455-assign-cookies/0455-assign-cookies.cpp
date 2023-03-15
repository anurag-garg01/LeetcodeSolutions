class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // greedy problem 
         if(s.size()==0)
            return 0;
        sort(g.begin(),g.end(),greater());
        sort(s.begin(),s.end(),greater());
        int j = 0 ;
       
        int cnt =0;
        
        for(int i =0;i<g.size();i++){
            if(s[j]>=g[i])
            {
                cnt++;
                j++;
                if(j>s.size()-1)
                    break;
            }
        }
        
        
        
        
        
        
        return cnt;
    }
};
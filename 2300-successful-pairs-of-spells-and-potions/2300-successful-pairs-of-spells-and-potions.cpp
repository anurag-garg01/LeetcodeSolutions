class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       // looks like presum 
        sort(potions.begin(),potions.end());
        vector<int> res;
        
        
        for(int i =0;i<spells.size();i++){
        // use binary search 
        long long int curr = spells[i];
        long long int ans = -1;
        long long int start =0;
        long long int end = potions.size()-1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(potions[mid]*curr>=success){
                ans = mid;
                end = mid-1;
            }
            else if(potions[mid]*curr<success){
                start = mid+1;
            }
            else {
                end = mid-1;
            }
            
        }
            
          if(ans ==-1)
          {
              res.push_back(0);
          }
            else{
                res.push_back(potions.size()-ans);
            }
            
            
            
        }
        
        return res;
    }
};
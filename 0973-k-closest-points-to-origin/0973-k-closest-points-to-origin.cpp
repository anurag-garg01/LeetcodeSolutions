class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // would be accepted in any order
        // return k closest points to origin 
        // create a max heap of pair<int,int> and store the values
        
        // tc : o(n*log(k)) //sc : o(k)
        vector<vector<int>> ans;
        
        // max heap 
        priority_queue<pair<int,vector<int>>> maxheap;
        
        int n = points.size();
        
      for(auto x : points){
          int first = x[0];
          int second = x[1];
          // pushing into the heap 
          maxheap.push({first*first + second*second,x});
          if(maxheap.size()>k){
              maxheap.pop();
          }
      }
        
        // getting the results back
       while(maxheap.size()>0){
            vector<int> res = maxheap.top().second;
            ans.push_back(res);
           maxheap.pop();
        }
        

        return ans;
        
    }
};
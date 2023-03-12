class Solution {
public:
    int maxScore(vector<int>& nums) {
        // sort array in decreasing order and get the prefix sum max
        // tc : o(nlogn )  sc : o(n)
        int cnt =0;
        
        sort(nums.begin(),nums.end(),greater());
        
        vector<int> pre;
        
      //  long long int ans = INT_MIN;
        long long int sum =0;
       // cout<<nums.size();
        for(auto x : nums){
            sum += x;
            if(sum>0){
                cnt++;
            }
        }
        
        // for(auto z : pre){
        //     if(z>0){
        //         cnt++;
        //     }
        // }
        
        
        return cnt;
        
    }
};
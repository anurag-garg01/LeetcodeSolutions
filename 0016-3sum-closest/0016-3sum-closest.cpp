class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // use 3 sum method here
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        int ans = 0;
        int diff = INT_MAX;
        int sum =0;
        int l=0;
        int r =0;
        
        for(int i=0;i<n;i++){
            l= i+1;
            r = n-1;
            while(l<r){
                sum  = nums[i] + nums[l] + nums[r];
                
                if(sum==target)
                    return target;
                else if(abs(sum-target)<diff){
                    diff = abs(sum-target);
                        ans = sum;
                }
                if(sum>target){
                   r--; 
                }
                else{
                    l++;
                }
                
                
            }
        }
        return ans;
    }
};
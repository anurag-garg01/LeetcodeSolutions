class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // tc : o(n) sc: o(1)
        int n = nums.size();
        int res = nums[0]; int l=0,r=0;
        for(int i =0;i<n;i++){
          
            l = (l ? l : 1 )* nums[i];
            r = (r ? r : 1) * nums[n-i-1];
            res = max(res,max(l,r));
        }
        return res;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans =-1;

        int pref = 1;
        int suff = 1;


        int n= nums.size();


        for(int i =0;i<n;i++){
            pref = pref* nums[i];
            ans = max(ans,pref);
            if(pref==0){
                pref =1;
            }
            
        }


        for(int i =n-1;i>=0;i--){
            suff = suff*nums[i];
            ans = max(ans,suff);
            if(suff==0){
                suff = 1;
            }
        }


        return ans;








    }
};
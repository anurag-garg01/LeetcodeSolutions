class Solution {
public:
    int hIndex(vector<int>& nums) {
        //atlesaS t n paper with n citatations
        // n = 5000

        // n^2 solution 
        int n = nums.size();
        int ans =0;

        for(int i =1;i<=n;i++){
            int cnt =0;
            for(int j=0;j<n;j++){
                if(nums[j]>=i){
                    cnt++;
                }
            }

            if(cnt>=i)
            ans = max(ans,i);
            else{
                break;
            }
        }



        return ans;

    }
};
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        /// return the number of arrays filled with 0s
        
        long long int cnt =0;
        long long int sum =0;
        long long int n = nums.size();
        
        for(int i =0;i<n;i++){
            if(nums[i]==0){
                cnt++;
                
            }
            else{
                sum +=  cnt*(cnt+1)/2;
                cnt =0;
            }
        
        }
        
        return sum+cnt*(cnt+1)/2;
    }
};
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        // return the minimum possible value of maximum integer after performing operations 
        
        //cant sort - need to preserve the order
        
        // cant be n^2 - in any case 
        
        // tricky problem 
        
       long long  int res = nums[0];
       long long int n = nums.size();
       long long int sum =nums[0];
        for(int i =1;i<n;i++){
            sum += nums[i];
            long long int temp = ceil((double)(sum)/(double)(i+1));
            res = max(res,temp);    
        }
        
        
        return res;
        
        
    }
};
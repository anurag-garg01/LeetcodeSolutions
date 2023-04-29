class Solution {
public:
    int findMin(vector<int>& nums) {
        // learnt from coding decoded solution 
        // do not use left<=right coz that will loop forever
        
        
        int low =0;
        int high = nums.size()-1;
        
        
        while(low<high){
            int mid = low  + (high - low)/2;
            
            if(nums[mid]<nums[high]){
                high = mid;
            }
            else {
                low = mid +1;
            }
            
        }
        
        
        return nums[low];
    }
};
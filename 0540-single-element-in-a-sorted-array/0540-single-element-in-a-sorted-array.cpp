class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
            int low = 0;
            int high = nums.size()-1;
        int n = nums.size();
        if(nums.size()==1)
            return nums[0];
        
        if(nums[0]!=nums[1])
            return nums[0];
        
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        
        while(low<=high){
            // thought of right logic 
            int mid = low  + (high-low)/2;
            
            // check edge cases
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];
            
            if( mid%2==1 && nums[mid]==nums[mid+1])
                high = mid-1;
            else if(mid%2==1 && nums[mid]==nums[mid-1]){
                low = mid + 1;
            }
            
            if(mid%2==0 && nums[mid]==nums[mid+1]){
                low = mid+1;
            }
            else if(mid%2==0 && nums[mid]==nums[mid-1]){
                high = mid-1;
            }
            
            
        }
        return -1;
        
    }
};
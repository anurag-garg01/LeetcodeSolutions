class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // return true if target element is present 
        // coding 
        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(nums[mid]==target){
                return true;
            }
            else if(nums[low]<nums[mid]){
                // left part is sorted
                if(target<nums[low] || target >nums[mid]){
                    // does not belong to the left part 
                    low = mid+1;
                }
                else {
                    high = mid-1;
                }
                
            }
            else if(nums[low]>nums[mid]){
                if(target<nums[mid] || target> nums[high]){
                    // target does not belong to the right part 
                    high = mid-1;
                }
                else{
                    
                    low = mid+1;
                }
            }
            else{
                 // duplicates
                low++;
            }
        }
        
        return false;
    }
};
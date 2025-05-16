class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // core : 

       // search in rotated sorted array 2 

       // just that the numbers are repeated now 

        
        // hamdling edge case 
        if(target == nums[0]){
            return true;
        }
        if(target==nums[nums.size()-1]){
            return true;
        }
        int low = 0;
        int high = nums.size()-1;
        

        while(low<=high){
             if(target == nums[low]){
            return low;
        }
        if(target==nums[high]){
            return high;
        }
            int mid = low + (high-low)/2;
            cout<<mid;
            if(nums[mid]==target){
                return true;
            }

            // if(nums[low]<=nums[mid] && (nums[low]<=target && target <= nums[mid])){
            //     high = mid-1;
            // }
            // else {
            //     low = mid+1;
            // }

            // either left side sorted or right side is sorted 
            // if left side is sorted 
            if(nums[low]<nums[mid]){
                if(nums[low]<target && target < nums[mid]){
                    high = mid-1;
                }
                else {
                    low = mid+1;
                }
            }
            else if(nums[mid]<nums[high]){
                // if right side is sorted

                if(target>nums[mid] && target <nums[high]){
                    low = mid+1;
                }
                else {
                    high = mid -1;
                }
            }
            else {
                // remove duplicates
                low++;

            }
            
        } 

        return false;
    }
};
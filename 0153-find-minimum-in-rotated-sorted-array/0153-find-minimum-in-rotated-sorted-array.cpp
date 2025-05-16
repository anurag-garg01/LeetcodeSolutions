class Solution {
public:
    int findMin(vector<int>& nums) {
        // find min in rotated sorted array 
        int low =0;
        int high = nums.size()-1;
        //handle edge cases 

        int ans = low;


        while(low<high){
            int mid = low + (high-low)/2;

            //handle edge cases 


            if(nums[mid]<nums[high]){
                high = mid;
            }

            else{
                low = mid+1;
            }


        }


        return nums[low];
        
        
        
        
        
        
    }
};
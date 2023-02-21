class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // binary search beacause O(n)
        // very simple in o(n) - simple traversal 
        
        // using binary search and return the single element 
        
        
        // 4 steps check boundary checks and condition for that single element in array(both left are righ elements would be different)
        
        int n = nums.size();
        int low =0;
        int high = n-1;
        
        // checking border conditions 
        if(nums.size()==1)
            return nums[0];
        if(nums[0]!=nums[1])
            return nums[0];
        
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        
        
        while(low<=high){
            
            int mid = low + (high-low)/2;
            
            // condition is that first occurence is at even index
            
            // base condition to find the element which occurs once 
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];
            
            if(mid%2==0 && nums[mid]==nums[mid+1] || (mid%2==1 && nums[mid]==nums[mid-1]))
                low = mid+1;
            else {
                high = mid-1;
            }

        }

        return -1;
    }
};
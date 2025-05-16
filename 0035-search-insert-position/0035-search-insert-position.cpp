class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // find the insert position 

        int l =0;
        int n = nums.size();
        int h = n-1;

        if(target>nums[h]){
            return h+1;
        }

        if(target<nums[l]){
            return 0;
        }

        while(l<h){
            int mid = l + (h-l)/2;
             if(nums[mid]==target){
                return mid;
             }

             if(nums[mid]<target){
               l=mid+1;
             }
             else {
                h=mid;
             }
            
        }


        return l;
    }
};
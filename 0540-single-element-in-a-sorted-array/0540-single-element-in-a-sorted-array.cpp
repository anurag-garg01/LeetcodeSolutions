class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // even odd concept will be applied 

        int l = 0;
        int h = nums.size()-1;
        int n = nums.size();
        if(n==1)
        return nums[0];
        // base case
        if(nums[0]!=nums[1]){
            return nums[0];
        }


        if(nums[n-2]!=nums[n-1])
            return nums[n-1];

        while(l<=h){
            int mid = l+(h-l)/2;

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }

            else if(mid%2 ==0 && nums[mid]!=nums[mid+1] || (mid%2==1 && nums[mid]==nums[mid+1])){
                h=mid-1;
            }
            else{
                l = mid +1;
            }
        }


        return -1;

    }
};
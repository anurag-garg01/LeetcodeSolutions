class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // check if the array is monotonic or not

        
        int inc =0,decr=0;
        int n = nums.size();

        for(int i =0;i<n-1;i++){
           if(nums[i+1]>nums[i])
           inc++;
           else if(nums[i+1]<nums[i])
           {
               decr++;
           }

        }

        if(inc>0 && decr>0)
        return false;


        return true;

    }
};
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        // move all the even integers in the begining followed by the odd numbers 

        int i =0;
        int j = nums.size()-1;
        int n = nums.size();
        while(i<j){
            while(i<n && nums[i]%2==0){i++;}
            while(j>=0 && nums[j]%2==1){j--;}
            // nums[i] and nums[j] are not at the adequate place 
            // if(nums[i]%2==1 && nums[j]%2==0)
            if(i<j)
            swap(nums[i++],nums[j--]);
        }

        return nums;
    }
};
class Solution {
public:
    void func(vector<int> &nums,int ind, vector<vector<int>>&ans,vector<int> output){
        int n = nums.size();
        // base case
        if(ind==n)
        {   ans.push_back(output);
            return;
        }
      
        // we have to make two calls to add the element and to not add the element so below is the method to write that - reference - neetcode video 
        
        output.push_back(nums[ind]);
        func(nums,ind+1,ans,output);
        
        
        output.pop_back();
         func(nums,ind+1,ans,output);
        
       
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        //vector<int> output;
        int ind =0;
        func(nums,ind,ans,{});
        
        
        return ans;
    }
};
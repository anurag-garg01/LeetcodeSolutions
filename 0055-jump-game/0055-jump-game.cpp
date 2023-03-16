class Solution {
public:
    bool canJump(vector<int>& nums) {
        // goood solution by tech dose - greedy 
        
        int max_possible =0;
        
      for(int i =0;i<nums.size();i++){
          if(i>max_possible){
              return false;
          }
          max_possible = max(max_possible,nums[i]+i);
      }
        
        return true;
        
    }
};
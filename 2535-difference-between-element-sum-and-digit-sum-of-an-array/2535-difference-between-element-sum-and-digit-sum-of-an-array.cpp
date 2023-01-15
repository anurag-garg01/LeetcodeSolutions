class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0;
        for(auto x : nums){
            sum+=x;
        }
        int sum2 =0;
        for(auto k :nums){
            while(k!=0){
                sum2 += k%10;
                k=k/10;
            }
        }
        
        return abs(sum-sum2);
    }
};
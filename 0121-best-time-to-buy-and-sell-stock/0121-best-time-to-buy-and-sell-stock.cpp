class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //do it again and again you failed the interview because of this question 
        int ans =0;
        int mini = INT_MAX;
        int n = prices.size();
        
        for(int i =0;i<n;i++){
            int profit = prices[i]-mini;
            
            mini = min(mini,prices[i]);
            if(profit<0){
                profit =0;
            }
            
            ans = max(ans,profit);
         
                       
        }
            return ans;
    }
};
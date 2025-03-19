class Solution {
public:
    int func(vector<int> &cost,int ind,vector<int> &dp ){
        // base case 

        if (ind==0||ind==1){
            return cost[ind];
        }

        if(dp[ind]!=-1){
            return dp[ind];
        }

        // one step or two step

        int onestep = cost[ind] + func(cost,ind-1,dp);
        int twostep = INT_MAX;
        if(ind>1){
            twostep = cost[ind] + func(cost,ind-2,dp);
        }

        return dp[ind] = min(onestep,twostep);


    }
    int minCostClimbingStairs(vector<int>& cost) {
        // once you pay the cost you can either climb one step or two steps , take the mini

        int ans=0;
        int n = cost.size();
        vector<int> dp(n+1,-1);

        //lets solve in 2d dp 

        dp[0]=cost[0];
        dp[1] =cost[1];



        for(int ind =2;ind<n;ind++){
            int onestep = cost[ind] + dp[ind-1];
            int twostep=INT_MAX;
            if(ind>1){
                twostep = cost[ind] + dp[ind-2];
            }

            dp[ind] = min(onestep,twostep);

        }

        return min(dp[n-1],dp[n-2]);

       


        // return min(func(cost,n-1,dp),func(cost,n-2,dp));
    }
};
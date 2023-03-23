//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int solve(int n , vector<int> &dp, vector<int> &arr,int k){
        if(n==0)
        return 0;
        
        if(dp[n]!=-1)
        return dp[n];
        
        int mini = INT_MAX;
        // earlier we used to do left and right but here we need to be careful 
        
        for(int i =1;i<=k;i++){
            if(n-i>=0)
            {int jump = solve(n-i,dp,arr,k) + abs(arr[n]-arr[n-i]);
            mini = min(mini,jump);
            }
        }
        
        return dp[n] = mini;
        
        
    }
    int minimizeCost(vector<int>& arr, int n, int k) {
        // find the minimum possible cost 
        
        vector<int> dp(n+1,-1);
        
        return solve(n-1,dp,arr,k);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends
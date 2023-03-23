//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
//   long long int func(int n, vector<long long int> &dp,vector<int> arr){
      
//       if(n==0){
//           return 0;
//       }
//       if(dp[n]!=-1)
//       return dp[n];
//       long long int right = INT_MAX;
      
//       long long int left = func(n-1,dp,arr) + abs(arr[n]-arr[n-1]);
      
//       if(n>1){
//           right = func(n-2,dp,arr) + abs(arr[n]-arr[n-2]);
//       }
 
//       return dp[n]=min(left,right);
//   }
    int solve(int ind, vector<int>& height, vector<int>& dp){
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int jumpTwo = INT_MAX;
    int jumpOne= solve(ind-1, height,dp)+ abs(height[ind]-height[ind-1]);
    if(ind>1)
        jumpTwo = solve(ind-2, height,dp)+ abs(height[ind]-height[ind-2]);
    
    return dp[ind]=min(jumpOne, jumpTwo);
    }
    
    int minimumEnergy(vector<int>& height, int n) {
        // so we wil consider from going n-1 to 0 
        // vector<long long int> dp(n,-1);
        // return func(n-1,dp,arr);
        // int n=height.size();
  vector<int> dp(n,-1);
    return solve(n-1,height,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends
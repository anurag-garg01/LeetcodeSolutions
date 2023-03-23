//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  long long int func(int n, vector<long long int> &dp,vector<int> &arr){
      
      if(n==0){
          return 0;
      }
      if(dp[n]!=-1)
      return dp[n];
      long long int right = INT_MAX;
      
      long long int left = func(n-1,dp,arr) + abs(arr[n]-arr[n-1]);
      
      if(n>1){
          right = func(n-2,dp,arr) + abs(arr[n]-arr[n-2]);
      }
 
      return dp[n]=min(left,right);
  }
    // int solve(int ind, vector<int>& height, vector<int>& dp){
    // if(ind==0) return 0;
    // if(dp[ind]!=-1) return dp[ind];
    // int jumpTwo = INT_MAX;
    // int jumpOne= solve(ind-1, height,dp)+ abs(height[ind]-height[ind-1]);
    // if(ind>1)
    //     jumpTwo = solve(ind-2, height,dp)+ abs(height[ind]-height[ind-2]);
    
    // return dp[ind]=min(jumpOne, jumpTwo);
    // }
    
    int minimumEnergy(vector<int>& arr, int n) {
        // so we wil consider from going n-1 to 0 
       // int dp[n];
       // return func(n-1,dp,arr);
        
        // dp[0]=0;
        int right = INT_MAX;
        int prev =0;
        int prev2 = 0;
        for(int i=1;i<n;i++){
            // int left = dp[i-1] + abs(arr[i]-arr[i-1]);
            
            // if(i>1){
            //      right = dp[i-2] + abs(arr[i]-arr[i-2]);
            // }
            
            // dp[i] = min(left,right);
            
            int left = prev + abs(arr[i]-arr[i-1]);
            if(i>1)
             right = prev2 + abs(arr[i]-arr[i-2]);
            
            int curri = min(left,right);
            prev2 = prev;
            prev = curri;
        }
        
        return prev;
        
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
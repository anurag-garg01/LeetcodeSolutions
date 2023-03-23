//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int func(int *arr, int ind , vector<int> &dp){
	    
	    if(ind ==0)
	        return arr[0];
	        
	   if(ind<0)
    	   return 0;
	    
	    if(dp[ind]!=-1)
	        return dp[ind];
	    
	    int pick = arr[ind] + func(arr,ind-2,dp);
	    
	    int notpick = 0 + func(arr,ind-1,dp);
	    
	    
	    return dp[ind] = max(pick,notpick);
	    
	}
	
	
	int findMaxSum(int *arr, int n) {
	    // give the max sum bro 
	   // vector<int> dp(n,-1);
	    int dp[n];
	    //return func(arr,n-1,dp);
	    dp[0]=arr[0];
	    
	    int pick = INT_MIN;
	    
	    for(int i =1;i<=n;i++){
	        pick = arr[i];
	        if(i>1)
	         pick += dp[i-2];
	        
	        int notpick = dp[i-1];
	        
	        dp[i] = max(pick,notpick);
	    }
	    
	    
	    return dp[n-1];
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
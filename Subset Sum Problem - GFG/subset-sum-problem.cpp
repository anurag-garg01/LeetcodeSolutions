//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool func(vector<int> arr, int i, int target,vector<vector<int>> &dp){
        // base case
        if(target ==0){
            return true;
        }
        
        if(i==0){
            return target==arr[0];
        }
        if(dp[i][target]!=-1)
        return dp[i][target];
        bool take =false;
        // not take 
        bool nottake = func(arr,i-1,target,dp);
        
        // take 
        if(target>=arr[i])
         take = func(arr,i-1,target-arr[i],dp);
       
        
        return dp[i][target] = (take||nottake);
    }
    bool isSubsetSum(vector<int>arr, int target){
        // return the ans if there exists a subset that has sum equal to traget
         int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        
       // int n = arr.size();
        return func(arr,n-1,target,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
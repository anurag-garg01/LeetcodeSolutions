//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

    
    int count(vector<vector<int>> arr,int i,int j){
        
         int m = arr[0].size();
        
        int leftocc = -1;
        int rightocc = -1;
        int low = 0;
        int mid;
        int high= m-1;
       // finding left index
        
        while(low<=high){
             mid = low + (high-low)/2;
            
            if(arr[i][mid]==1){
                 leftocc = mid;
                 high = mid-1;
            }
            else if(arr[i][mid]<1){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
            
        }
       // cout<<leftocc;
        if(leftocc==-1)
            return 0;
        
        // now get the right one
        // this is the right most occurence
        low =0;
        high = m-1;
        
        while(low<=high){
            
             mid = low + (high-low)/2;
            
            if(arr[i][mid]==1){
                 rightocc = mid;
                low = mid+1;
            }
            else if(arr[i][mid]<1){
                low = mid+1;
            }
            else {
                high = mid-1;
            }
            
        }
        //cout<< rightocc - leftocc +1;
        return rightocc - leftocc +1;
    }
    
    
    
    
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // each row is sorted find the row with max number of 1s
	    // we can find the first and last occurence therefore computing all the occureneces in o(logn) and n rows so that would make it o(nlongn)
	    int maxi =0;
	    int ans =-1;
	    for(int i=0;i<n;i++){
	       // maxi = max(maxi,count(arr,i,0));
	       if(count(arr,i,0)>maxi){
	           ans = i;
	           maxi = count(arr,i,0);
	       }
	    }
	    
	    return ans;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	    // code here
	    // with binary search 
	    int low =0;
        int high = n-1;
        
        
        while(low<high){
            int mid = low  + (high - low)/2;
            
            if(nums[mid]<nums[high]){
                high = mid;
            }
            else {
                low = mid +1;
            }
            
        }
        
        
        return low;
	    
	    // without binary search 
	   // for(int i =0;i<n-1;i++){
	   //     if(arr[i]>arr[i+1])
	   //         return i+1;
	   // }
	   // return 0;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
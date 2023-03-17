//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
       unordered_map<int,int> mp;
       
       int s = 0;
       
       int max_index =0;
       
       
       
       for(int i =0;i<n;i++){
           
           s+=arr[i];
           if(s==0)
            max_index = i+1;
            
           if(mp.find(s)!=mp.end()){
              max_index = max(max_index,i-mp[s]); 
           }
           else{
           mp[s] = i;
           }     
           
       }
       
       return max_index;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
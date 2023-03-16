//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int n)
    {
        // find minimum number of denomination 
        vector<int> ans;
        
        while(n!=0){
            
            if(n/2000>0){
                ans.push_back(2000);
                n -= 2000;
            }    
            else if(n/500>0){
                ans.push_back(500);
                n -= 500;
            }
            else if(n/200>0){
                ans.push_back(200);
                n -= 200;
            }
            else if(n/100>0){
                ans.push_back(100);
                n -= 100;
            }
            else if(n/50>0){
                ans.push_back(50);
                n -= 50;
            }
            else if(n/20>0){
                ans.push_back(20);
                n -= 20;
            }
            else if(n/10>0){
                ans.push_back(10);
                n -= 10;
            }
            else if(n/5>0){
                ans.push_back(5);
                n -= 5;
            }
            else if(n/2>0){
                ans.push_back(2);
                n -= 2;
            }
            else if(n/1>0){
                ans.push_back(1);
                n -= 1;
            }
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
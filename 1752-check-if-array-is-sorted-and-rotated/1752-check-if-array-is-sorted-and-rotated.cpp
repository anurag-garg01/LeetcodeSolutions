class Solution {
public:
    bool check(vector<int>& arr) {
        
        // check if the rotated array is sorted or not 
        int check = 0;
        int n = arr.size();
    for(int i =0;i<n-1;i++){
            if(arr[i+1]<arr[i] && check ==1)
            {
                return false;
            }
            else if(arr[i+1]<arr[i] && check==0){
                check++;
            }
        }
        
        if(check>0 && arr[0]>arr[n-1])
            return true;
        else if(check > 0 && arr[0] <arr[n-1])
            return false;
        
        
        return true;
        
    }
};
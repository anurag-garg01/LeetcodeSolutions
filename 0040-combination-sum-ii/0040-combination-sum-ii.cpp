class Solution {
public:
    void findcombination(int ind, int target , vector<int>&arr,vector<vector<int>> &ans,vector<int>&ds){
        if(ind==arr.size()){
        
            if(target==0)
                ans.push_back(ds);
        
            return ;
        }
        // adding the element 
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findcombination(ind+1,target-arr[ind],arr,ans,ds);
            // jab vapsi jaa rhe ho toh pop_back krte jao
            ds.pop_back();
        }
        // not adding the element
        while(ind+1<arr.size() && arr[ind]==arr[ind+1]){
            ind++;
        }
        findcombination(ind+1,target,arr,ans,ds);
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        // firstly sort the array because we need only once occurence 
        
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>>ans;
        vector<int> ds;
        
        findcombination(0,target,candidates,ans,ds);
        
        return ans;
    }
};
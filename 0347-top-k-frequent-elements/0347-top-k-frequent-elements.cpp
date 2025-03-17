class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /*

        1-3
        2-2 
        3-1

        o to n arry 


        0 1 2 3 4 5 
        |
    

        */

        vector<int> ans;
        int n = nums.size();
        
        vector<vector<int>> arr(n+1);


        unordered_map<int,int> mp;

        for(auto x : nums){
            mp[x]++;
        }


        for(auto &[key,val] :mp){
            arr[val].push_back(key);
        }


        // traverse through array 


        for(int i =n;i>=0;i--){
           if(k>0){
                if(arr[i].size()!=0){
                    for(auto n : arr[i]){
                        if(k>0){
                            ans.push_back(n);
                            k--;
                        }
                    }
                }
           }
        }






        return ans;


    }
};
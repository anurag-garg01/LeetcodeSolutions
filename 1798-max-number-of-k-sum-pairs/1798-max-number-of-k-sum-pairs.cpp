class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        // this can be solved using tc : o(n)  sc :o(n)
        int n = nums.size();

        unordered_map<int,int> mp;
        int count =0;

        for(int i =0;i<n;i++)
        {
            if(mp.find(k-nums[i])!=mp.end()){
                count++;
                mp[k-nums[i]]--;
                // remove the element from map if occurence is zero 
                if(mp[k-nums[i]]==0){
                    mp.erase(k-nums[i]);
                }
            }
            else{
                mp[nums[i]]++;
            }
        }

        return count;
    //     // tc : o(nlogn) sc : o(1)
    //     // two pointers method used

    //     sort(nums.begin(),nums.end());

    //     int n = nums.size();
    //     int i =0;
    //     int j = n-1;
    //     int cnt =0;

    //     while(i<j){
    //         if(nums[i]+nums[j]==k){
    //             cnt++;
    //             i++;
    //             j--;
    //         }

    //         else if(nums[i]+nums[j]<k){
    //             i++;
    //         }
    //         else{
    //             j--;
    //         }
    //     }




    //     return cnt;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans =0;


        unordered_set<int> st;


        for(auto x : nums){
            st.insert(x);
        }


       for(auto x: nums){
        // not found condn
        if(st.find(x-1)==st.end()){
            int cnt =1;

            // while next number is in set 
            while(st.find(x+1)!=st.end()){
                    cnt++;
                    ans =max(ans,cnt);
                    x++;
            }
            ans =max(ans,cnt);
        }

       }

        return ans;
    }
};
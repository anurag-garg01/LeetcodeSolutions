class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        // return the three numbers 

        unordered_set<int> st;
        long long ans =0;

        int temp =1;
        for(int i =1;i<=n;i++){
            while(st.find(temp)!=st.end()){
                temp++;                
            }
            ans += temp;
            st.insert(temp);
            st.insert(target-temp);
            temp++;

        }








        return ans;


    }
};
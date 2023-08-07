class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //hashmap + set 
        unordered_map<int,int> mp;
        for(auto k : arr){
            mp[k]++;
        }

        set<int> st;

        for(auto x : mp){
            if(st.find(x.second)!=st.end())
                return false;
            
            st.insert(x.second);
        }

        return true;
    }
};
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          unordered_map<int,int> mp;
        
        int n= nums2.size();
        int j =0;
        stack<int> st;
        for(int i =n-1;i>=0;i--){
            if(st.empty()){
                mp[nums2[i]]=-1;
                st.push(nums2[i]);
            }
            else if(st.top()>nums2[i]){
                mp[nums2[i]]=st.top();
                st.push(nums2[i]);
            }
            else if(st.top()<nums2[i]){
                while(!st.empty() && st.top()<nums2[i])
                    {
                        st.pop();
                    }
                if(st.empty()){
                    mp[nums2[i]]=-1;
                }
                else{
                    mp[nums2[i]]=st.top();
                }
                st.push(nums2[i]);
            }
        }

        for(auto x : mp)
        {
            cout << x.first<< " "<<x.second<<endl;
        }


        vector<int> ans;

        
        for(int i =0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }


        return ans;






        // // o(n^2) solution with sc : o(n)


        // unordered_map<int,int> mp;
        
        // int n= nums2.size();
        // int j =0;
        // for(int i =0;i<n;i++){
        //     for( j =i+1;j<n;j++){
        //         if(nums2[j]>nums2[i]){
        //             mp[nums2[i]]=nums2[j];
        //             break;
        //         }
        //     }
        //     if(j==n){
        //         mp[nums2[i]]=-1;
        //     }

        // }



        // vector<int> ans;


        // for(int i =0;i<nums1.size();i++){
        //     ans.push_back(mp[nums1[i]]);
        // }


        // return ans;
    }
};
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // return minimu from both arrays 
        // tc : o(n)  sc :o(1)
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        
        int m = nums1.size();
        int n = nums2.size();
        int i =0;
        int j =0;
        
        while(i<m && j<n){
            if(nums1[i]==nums2[j] && i<m && j<n)
            return nums1[i];
            else if(nums1[i]>nums2[j] && i<m && j<n)
                j++;
            else if((nums1[i]<nums2[j] && i<m && j<n))
                i++;  
        }
        
        
        
        
        return -1;
        
    }
};
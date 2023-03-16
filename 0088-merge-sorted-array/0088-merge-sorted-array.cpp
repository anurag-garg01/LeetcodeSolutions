class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // nums 1 has m + n elements so consider that and code
        
        int i = m-1;
        int j= n-1;
        int k = m+n;
        if(m==0){
            for(int i =0;i<nums1.size();i++){
                nums1[i]=nums2[i];
            }
        }
        if(n!=0){
        while(i>=0 && j>=0){
            // compare last two indices and operate
            if(nums1[i]>=nums2[j]){
                nums1[k-1] =  nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k-1]= nums2[j];
                j--;
                k--;
            }
            }
            
            if(i<0 && j>=0){
                while(k>=0 && j>=0){
                nums1[k-1]=nums2[j];
                k--;
                j--;
                }
            }
            if(j<0 && i>=0){
                while(k>=0 && i>=0){
                nums1[k-1]=nums1[i];
                k--;
                i--;
                }
            }
        }
    }
};
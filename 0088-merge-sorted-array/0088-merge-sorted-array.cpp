class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // merge the two arrays 

        //find the last index ->


        int last = m+n-1;


        while(m>0 && n>0){

            if(nums1[m-1]>nums2[n-1]){
                nums1[last]=nums1[m-1];
                m--;
            }
            else {
                nums1[last]=nums2[n-1];
                n--;
            }
            last--;
        }


        // if n>0 left 

        while(n>0){
            nums1[last]=nums2[n-1];
            n--;
            last--;

        }
        
    }
};
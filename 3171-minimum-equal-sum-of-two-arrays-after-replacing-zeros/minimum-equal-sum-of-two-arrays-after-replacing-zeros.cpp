class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long ans =0;

        long long sum1=0;
        long long sum2=0;

        int cnt1 =0;
        int cnt2 =0;

        for(auto x: nums1){
            if(x==0){
                sum1 +=1;
                cnt1++;
            }
            else{
                sum1 += x;
            }
        }

        for(auto x: nums2){
            if(x==0){
                sum2 +=1;
                cnt2++;
            }
            else{
                sum2 += x;
            }
        }


        if(sum1==sum2){
            return sum1;
        }


        if(sum1!=sum2){
            if(sum2>sum1){
                if(cnt1!=0){
                    return sum2;
                }
            }
            if(sum1>sum2){
                if(cnt2!=0){
                    return sum1;
                }
            }
        }

        return -1;











        return ans;
    }
};
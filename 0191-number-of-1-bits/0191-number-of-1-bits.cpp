class Solution {
public:
    int hammingWeight(int n) {
        int cnt =0;
        
        // count the total number of 1 bits 
        while(n!=0)
        {
            
            if (n&1){
                cnt++;
            }

            n= n>>1;
        }

        return cnt;
    }
};
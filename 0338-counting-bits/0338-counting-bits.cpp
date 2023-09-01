class Solution {
public:
    vector<int> countBits(int n) {
        // do it without the inbuilt function 

        // 0->n number of 1s 

        //nlogn is very easy jsut do it in naive way 
        
        vector<int> ans(n+1);

         ans[0]=0;


        for(int i=1;i<=n;i++){
            ans[i] = ans[i/2] + i%2; 
        }
        

        return ans;


        


    }
};
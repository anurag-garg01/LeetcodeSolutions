class Solution {
public:
    int func(int n ){
        //base case 

        if(n==0){
            return 0;
        }

        if(n==1){
            return 1;
        }

        if(n==2){
            return 2;
        }

        return func(n-1) +func(n-2);
    }
    int climbStairs(int n) {
        return func(n);
    }
};
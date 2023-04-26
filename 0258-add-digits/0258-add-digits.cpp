class Solution {
public:
    int addDigits(int num) {
        // reapeatedly add untill one number is left 
        int sum = num;
        while(sum>=10){
            int temp = sum;
            int s=0;
            while(temp!=0){
                s += temp%10;
                temp=temp/10;
            }
            
            sum =s;
            
        }
        
        return sum;
    }
};
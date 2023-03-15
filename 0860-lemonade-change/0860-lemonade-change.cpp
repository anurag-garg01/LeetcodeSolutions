class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // simple greedy question conditions 
        
        int fives=0;
        int tens =0;
        for(auto x: bills){
            if(x==5){
                fives++;
            }
            else if(x==10){
                fives--;
                tens++;
            }
            else if(x>10){
                if(tens>0){
                    tens--;
                    fives--;
                }
                
                else{
                    fives = fives - 3;
                }
            }
                 if(fives<0)
                    return false;
            
            
        }
        
        
//         if(fives<0)
//             return false;
        
        
        return true ;
        
    }
};
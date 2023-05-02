class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        
        while(n!=1){
            int k =0;
            int temp = n;
            while(temp!=0){
                int r = temp%10;
                k = k+ r*r;
                temp/=10;
            }
            if(k ==1)
            {
                return true;
            }
           if(s.find(k)!=s.end()){
               return false;
           } 
            else 
                s.insert(k);
            n= k;
        }
        return true;
    }
};
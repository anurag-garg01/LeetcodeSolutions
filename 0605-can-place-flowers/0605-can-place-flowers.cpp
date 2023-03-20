class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int required) {
       int cnt =0;
        
        int n = flowerbed.size();
        
        for(int i =0;i<n;i++){
            // writing condition for the three consecutive numbers to be zero 
            
            if((i-1<0  || flowerbed[i-1] ==0  ) && flowerbed[i]==0 && (i+1>=n || flowerbed[i+1]==0))
            {   
                cout<<i<<endl;
                flowerbed[i]=1;
                cnt++;
            }
            
            
            
        }
        
        
        
        if(cnt>=required)
            return true;
        
        
        
        return false;
        
        
    }
};
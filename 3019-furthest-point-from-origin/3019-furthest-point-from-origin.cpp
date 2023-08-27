class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l =0;
        int r =0;
        int space =0;
        int n = moves.size();

        for(int i =0;i<n;i++){
            if(moves[i]=='L'){
                l++;
            }
            else if(moves[i]=='R'){
                r++;
            }
            else {
                space++;
            }
        }


        if(l>=r){
            return l+space-r;
        }
        else 
        return r+space-l;
        

        


    }
};
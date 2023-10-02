class Solution {
public:
    bool winnerOfGame(string colors) {
        // winner of the game 
        // removed the color pieces if both the members are same

        // BBBBB
        int cnta =0;
        int cntb =0;
        int n = colors.size();

        for(int i =1;i<n-1;i++){
            if(colors[i-1]== 'A' && colors[i]== 'A' && colors[i+1]== 'A')
            {
                cnta++;
            }
            else if(colors[i-1]== 'B' && colors[i]== 'B' && colors[i+1]== 'B'){
                cntb++;
            }
        }


        if(cnta>cntb)
            return true;


        return false;


    }
};
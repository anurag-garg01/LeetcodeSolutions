class Solution {
public:
    int addMinimum(string word) {
        // tricky greedy problem 
        int i=0;
        int n = word.size();
        
        int sum =0;
        
        while(i<n){
            (word[i]=='a')?i++:sum++;
             (word[i]=='b')?i++:sum++;
             (word[i]=='c')?i++:sum++;
        }
        
        return sum;
    }
};
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       // 9*9 max iteration 
       int n = board.size();
       int m = board[0].size();

       set<string> s;

       for(int i =0;i<n;i++){
           for(int j=0;j<m;j++){
            if(board[i][j]!='.'){
                if(s.find("row" + to_string(i)+ to_string(board[i][j]))!=s.end()){
                    return false;
                }
                if(s.find("column" + to_string(j)+ to_string(board[i][j]))!=s.end()){
                    return false;
                }
                if(s.find("mat" + to_string((i/3)*3+j/3)+ to_string(board[i][j]))!=s.end()){
                    return false;
                }
                s.insert("row" + to_string(i)+ to_string(board[i][j]));
                s.insert("column" + to_string(j)+ to_string(board[i][j]));
                s.insert("mat" + to_string((i/3)*3+j/3)+ to_string(board[i][j]));
            }
           }
       }

        
        return true;
    }
};
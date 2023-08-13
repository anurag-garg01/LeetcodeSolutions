class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        int i =n;
        int cnt =0;
        while(s[i]==' '){
            i--;
        }
       
            while(i>=0 && s[i]!=' '){
                cnt++;
                i--;
            }

      return cnt;
    }
};
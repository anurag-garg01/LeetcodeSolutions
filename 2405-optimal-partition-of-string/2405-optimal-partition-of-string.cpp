class Solution {
public:
    int partitionString(string s) {
        set<int> mp;
        int cnt =0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                cnt++;
                mp.clear();
                cout<<i;
                 mp.insert(s[i]);
            }
            else{
                mp.insert(s[i]);
            }
        }
        return cnt+1;
    }
};
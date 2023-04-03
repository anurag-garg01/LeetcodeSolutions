class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l=0;
        int r = people.size()-1;
        int cnt =0;
        sort(people.begin(),people.end());
        
        while(l<=r){
            int remain = limit - people[r];
            cnt++;
            r--;
            
            if(l<=r && remain>=people[l]){
                l++;
            }
        }
         return cnt;
    }
};
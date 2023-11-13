class Solution {
public:
    string sortVowels(string s) {
        // sort vowels in a string 
        vector<char> vec;
        int n = s.size();

        for(int i =0;i<n;i++){
            if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'  ){
                vec.push_back(s[i]);
            }
        }

        sort(vec.begin(),vec.end());

        vector<char> ans(n);
        int j =0;
        for(int i =0;i<n;i++){
             if(!(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' )){
                 ans[i] =s[i]; 
             }
             else {
                 ans[i] = vec[j++];
             }
        }
        string finalans;
        for(int i =0;i<ans.size();i++){
            finalans += ans[i];
        }
        return finalans;
    }
};
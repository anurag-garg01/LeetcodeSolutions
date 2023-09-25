class Solution {
public:
    char findTheDifference(string s, string t) {

        char arr[26]={0};

        for(int i =0;i<s.size();i++){
            arr[s[i]-'a']++;
        }

        for(int i =0;i<t.size();i++){
            arr[t[i]-'a']--;
        }


        for(int i =0;i<26;i++)
        {
            //cout<<arr[i]<<" ";
        if(arr[i]!=0){
            return char(i+'a');
        }
        }


        return 0;



    }
};
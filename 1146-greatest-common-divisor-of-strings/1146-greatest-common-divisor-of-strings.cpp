class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        // concatinate itself

        // take an example like s1 = t * m times

        // and s2 = t * n times so we do s1+s2 first to then get the gcd if they are not equal return the empty string 


        if(s1+s2==s2+s1){
            return s1.substr(0,__gcd(s1.size(),s2.size()));
        }


        return "";


    }
};
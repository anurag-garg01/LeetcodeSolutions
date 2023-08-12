class Solution
{
    public:

        bool isPalindrome(string s)
        {
            // using o(n) tc and o(1) space complexity 

            int start = 0;
            int end = s.size()-1;

            while(start<=end){
                if(!isalnum(s[start])){
                    start++;
                }
                else if(!isalnum(s[end])){
                    end--;
                }
                else {
                    if(tolower(s[start])!=tolower(s[end]))
                        return false;

                    start++;
                    end--;
                }
                
            }
            return true;
           	// TC o(n) &&  SC o(n)

           	// this could be solved without using extra space

           	// vector<char> ans;
           	// for (int i = 0; i < s.size(); i++)
           	// {
           	//     if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
           	//         ans.push_back(tolower(s[i]));
           	// }

           	// int i = 0;
           	// int j = ans.size() - 1;
           	// while (i < j)
           	// {
           	//     if (ans[i] != ans[j])
           	//         return false;
           	//     i++;
           	//     j--;
           	// }
           	// return true;
        }
};
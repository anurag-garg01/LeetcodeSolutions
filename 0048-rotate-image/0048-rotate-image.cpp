class Solution
{
    public:
        void rotate(vector<vector < int>> &arr)
        {

            int n = arr.size();

            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    swap(arr[i][j], arr[j][i]);
                }
            }
            
            
             for(int i=0;i<arr.size();i++){
            //reverse all the rows matrixes
            reverse(arr[i].begin(),arr[i].end());
        }
            
        }
};
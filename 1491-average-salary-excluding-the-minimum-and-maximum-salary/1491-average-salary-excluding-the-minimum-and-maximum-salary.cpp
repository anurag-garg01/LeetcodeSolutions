class Solution {
public:
    double average(vector<int>& salary) {
        double ans =0;
        
        int n = salary.size();
        int sum =0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            sum += salary[i];
            
            if(salary[i]>maxi){
                maxi = salary[i];
            }
            if(salary[i]<mini){
                mini = salary[i];
            }
        }
        
        double res = (sum - mini-maxi)/double(n-2);
        
        return res;
        
    }
};
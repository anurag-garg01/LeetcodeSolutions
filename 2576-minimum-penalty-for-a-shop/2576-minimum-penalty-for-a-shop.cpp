class Solution {
public:
    int bestClosingTime(string customers) {
        // best closing time
        // return the earliest time at which the shop must be closed

        // take the prefix and suffix and give the ans
        
        // we can do it in o(1)
        int sum =0;
        int n = customers.size();
        for(int i =0;i<n;i++){

            if(customers[i]=='Y')
                sum += 1;
            else 
                sum += 0;

        }

        cout<<sum;
        int mini = sum;
        int temp =0;
        int presum =0;
        int res = 0;
        for(int i =0;i<n;i++){
            // calculating the penalty till the current index 
            if(customers[i]=='Y')
                temp += 0;
            else 
                temp += 1;

            if(customers[i]=='Y')
                presum += 1;
            else 
                presum += 0;

            if(sum-presum+temp<mini){
                res = i+1;
                mini = sum-presum+temp;
            }
            // mini = min(mini,sum-presum+temp);
        }

        return res;








    }
};
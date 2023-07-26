// class Solution {
// public:
//     double timeRequired(vector<int>& dist, int speed) {
//         double time = 0.0;
//         for (int i = 0 ; i < dist.size(); i++) {
//             double t = (double) dist[i] / (double) speed;
//             // Round off to the next integer, if not the last ride.
//             time += (i == dist.size() - 1 ? t : ceil(t));
//         }
//         return time;
//     }
    
//     int minSpeedOnTime(vector<int>& dist, double hour) {
//         int left = 1;
//         int right = 1e7;
//         int minSpeed = -1;
        
//         while (left <= right) {
//             int mid = (left + right) / 2;
            
//             // Move to the left half.
//             if (timeRequired(dist, mid) <= hour) {
//                 minSpeed = mid;
//                 right = mid - 1;
//             } else {
//                 // Move to the right half.
//                 left = mid + 1;
//             }
//         }
//         return minSpeed;
//     }
// };


class Solution
{
    public:

        double totaltime(vector<int> &dist, int speed)
        {

            double sum = 0;
            int n = dist.size();

            for (int i = 0; i < n; i++)
            {
                double t = (double)dist[i] / (double) speed;



                sum += (i==n-1 ? t : ceil(t));
            }
            //cout<<sum<<" ";
            return sum;
        }

    int minSpeedOnTime(vector<int> &dist, double hour)
    {
       	 //minimum time to reach office on time 

        int n = dist.size();

        int ans = -1;

        int start = 1;
        int end = 10000000;

        while (start <= end)
            {
                double mid = start + (end - start) / 2;
                cout<<mid<<" ";
                if (totaltime(dist, mid) <= hour)
                {
                    ans = mid;
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }

            return ans;
        }
    };
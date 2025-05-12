class Solution:
    def buttonWithLongestTime(self, events: List[List[int]]) -> int:
        # button with longest push time 


        time_taken = -inf
        res_index = -inf

        n = len(events)

        time_taken = events[0][1]
        res_index = events[0][0]

        for i in range(1,n):
            if (events[i][1]-events[i-1][1]>=time_taken):
                # time_taken = events[i][1]-events[i-1][1]
                if(events[i][1]-events[i-1][1]==time_taken and events[i][0]<res_index):
                    res_index = events[i][0]
                elif (events[i][1]-events[i-1][1]>time_taken):
                    res_index = events[i][0]
                
                time_taken = events[i][1]-events[i-1][1]
                    

        
        return res_index
            





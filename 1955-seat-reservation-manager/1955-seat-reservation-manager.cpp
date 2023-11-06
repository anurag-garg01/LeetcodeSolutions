class SeatManager {
public:
    int cnt;
     priority_queue<int,vector<int>,greater<int>> pq;
    SeatManager(int n) {
        cnt =1 ;
        for(int i=1;i<=n;i++) pq.push(i);
       
    }
    
    int reserve() {
        int number = pq.top();
        pq.pop();
        return number;

    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
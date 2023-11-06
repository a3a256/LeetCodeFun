class SeatManager {
public:
    int last = 1;
    priority_queue<int, vector<int>, greater<int>> q;
    SeatManager(int n) {
    }
    
    int reserve() {
        if(q.size() != 0){
            int ans = q.top();
            q.pop();
            return ans;
        }
        last++;
        return last-1;
    }
    
    void unreserve(int seatNumber) {
        if(seatNumber == last){
            last--;
        }
        q.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */

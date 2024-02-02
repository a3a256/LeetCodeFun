class RecentCounter {
public:
    vector<int> req;
    int min, count;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        count = 0;
        req.push_back(t);
        if(req.size() == 0){
            return 1;
        }
        int i;
        min = t-3000;
        for(i=req.size()-1; i>-1; i--){
            if(req[i]>=min){
                count++;
            }
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

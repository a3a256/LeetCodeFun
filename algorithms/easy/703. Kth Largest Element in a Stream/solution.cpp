class KthLargest {
public:
    vector<int> q;
    int n;
    KthLargest(int k, vector<int>& nums) {
        q = nums;
        sort(q.begin(), q.end());
        n = k;
    }
    
    int add(int val) {
        if(q.size() == 0){
            q.push_back(val);
            return val;
        }

        int i;
        if(q.back() <= val){
            q.push_back(val);
        }else{
            for(i=q.size()-1; i>-1; i--){
                if(q[i] <= val){
                    q.insert(q.begin()+i+1, val);
                    break;
                }
            }

            if(val < q[0]){
                q.insert(q.begin(), val);
            }
        }

        if(q.size() <= n){
            return q[0];
        }

        return q[q.size() - n];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

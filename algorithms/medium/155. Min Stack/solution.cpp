class MinStack {
public:
    MinStack() {
    }

    std::vector<int> arr;
    int min_val;
    
    void push(int val) {
        if(arr.size() == 0){
            min_val = val;
        }else{
            if(val < min_val){
                min_val = val;
            }
        }
        arr.push_back(val);
    }
    
    void pop() {
        arr.pop_back();
        min_val = *min_element(arr.begin(), arr.end());
    }
    
    int top() {
        int length = arr.size();
        int index = length - 1;
        return arr[index];
    }
    
    int getMin() {
        return min_val;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

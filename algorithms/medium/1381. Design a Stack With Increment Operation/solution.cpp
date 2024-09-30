class CustomStack {
public:
    int limit;
    vector<int> stack;
    CustomStack(int maxSize) {
        limit = maxSize;
    }
    
    void push(int x) {
        if(stack.size() < limit){
            stack.push_back(x);
        }
    }
    
    int pop() {
        if(stack.empty()){
            return -1;
        }
        int value = stack.back();
        stack.pop_back();
        return value;
    }
    
    void increment(int k, int val) {
        int i;
        for(i=0; i<min(k, (int)stack.size()); i++){
            stack[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */

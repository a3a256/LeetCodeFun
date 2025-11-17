class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count = 0, i;
        while(nums[0] != 1 && !nums.empty()){
            nums.erase(nums.begin()+0);
        }
        if(nums.empty()){return true;}
        while(nums.back() != 1){
            nums.pop_back();
        }
        vector<int> tracer;
        for(i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                tracer.push_back(count);
                count = 0;
            }else{
                count++;
            }
        }
        for(i=1; i<tracer.size(); i++){
            if(tracer[i] < k){return false;}
        }
        return true;
    }
};

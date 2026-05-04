class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int ones = 0;
        int zeros = 0;
        for(int i: nums){
            if(i%2 == 0){
                zeros++;
            }else{
                ones++;
            }
        }
        int i;
        vector<int> v;
        for(i=0; i<zeros; i++){v.push_back(0);}
        for(i=0; i<ones; i++){v.push_back(1);}
        return v;
    }
};

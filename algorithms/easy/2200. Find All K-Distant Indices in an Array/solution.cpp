class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int i, j;
        vector<int> pos;
        for(i=0; i<nums.size(); i++){
            for(j=0; j<nums.size(); j++){
                if(abs(i - j) <= k && nums[j] == key){
                    pos.push_back(i);
                    break;
                }
            }
        }
        return pos;
    }
};

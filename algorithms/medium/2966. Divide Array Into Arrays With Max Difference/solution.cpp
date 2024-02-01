class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        if((int)nums.size()%3 != 0){
            return {};
        }
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        vector<int> temp;
        int i;
        for(i=0; i<nums.size(); i++){
            temp.push_back(nums[i]);
            if(temp.size() == 3){
                if(temp.back() - temp[0] > k){
                    return {};
                }
                v.push_back(temp);
                temp.clear();
            }
        }

        return v;
    }
};

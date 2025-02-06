class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int i, j;
        map<long long, vector<int>> mp;
        long long val;
        for(i=0; i<nums.size()-1; i++){
            for(j=i+1; j<nums.size(); j++){
                val = nums[i]*nums[j];
                mp[val].push_back(nums[i]);
                mp[val].push_back(nums[j]);
            }
        }
        int count = 0;
        for(auto it: mp){
            if(it.second.size()>=4){
                count += ((it.second.size()/2-1)*4)*(it.second.size()/2);
            }
        }
        return count;
    }
};

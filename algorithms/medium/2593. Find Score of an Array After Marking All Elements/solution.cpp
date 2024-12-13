class Solution {
public:
    long long findScore(vector<int>& nums) {
        if(nums.size() < 2){
            return nums[0];
        }
        map<int, vector<int>> mp;
        int i;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        vector<int> b;
        b = nums;
        sort(nums.begin(), nums.end());
        long long score = 0, index;
        for(i=0; i<nums.size(); i++){
            if(mp[nums[i]].size() > 0){
                index = mp[nums[i]][0];
                if(b[index] > 0){
                    score += (long long)b[index];
                    b[index] = 0;
                    if(index == 0){
                        b[index+1] = 0;
                    }else if(index == b.size()-1){
                        b[index-1] = 0;
                    }else{
                        b[index-1] = 0;
                        b[index+1] = 0;
                    }
                }
                mp[nums[i]].erase(mp[nums[i]].begin()+0);
            }
        }
        return score;
    }
};

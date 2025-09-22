class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max_freq = 0, count = 0;
        map<int, int> mp;
        for(int i: nums){
            mp[i]++;
            if(mp[i] > max_freq){max_freq = mp[i];count = 1;}
            else if(mp[i] == max_freq){count++;}
        }
        return max_freq*count;
    }
};

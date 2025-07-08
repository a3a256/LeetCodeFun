class FindSumPairs {
public:
    vector<int> vec1, vec2;
    map<int, int> mp;
    int left = 0;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        vec1 = nums1;
        vec2 = nums2;
        for(int i: vec2){
            mp[i]++;
        }
    }
    
    void add(int index, int val) {
        mp[vec2[index]] -= 1;
        vec2[index] += val;
        mp[vec2[index]] += 1;
    }
    
    int count(int tot) {
        int res = 0;
        for(int i: vec1){
            left = tot - i;
            res += mp[left];
        }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */

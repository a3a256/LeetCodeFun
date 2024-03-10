class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> one, two, res;
        for(int i: nums1){
            one.insert(i);
        }
        for(int i: nums2){
            two.insert(i);
        }
        set_intersection(one.begin(), one.end(),
                        two.begin(), two.end(),
                        inserter(res, res.begin()));
        vector<int> out;
        for(auto it: res){
            out.push_back(it);
        }
        return out;
    }
};

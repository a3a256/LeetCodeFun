class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v3;
        set_intersection(nums1.begin(), nums1.end(),
                        nums2.begin(), nums2.end(),
                        back_inserter(v3));
        if(v3.size() == 0){return -1;}
        return v3[0];
    }
};

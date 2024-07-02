class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int, int> one, two;
        int i;
        for(i=0; i<nums1.size(); i++){
            one[nums1[i]]++;
        }
        for(i=0; i<nums2.size(); i++){
            two[nums2[i]]++;
        }
        for(auto it: one){
            if(two[it.first] != 0){
                vector<int> temp(min(it.second, two[it.first]), it.first);
                res.insert(res.end(), temp.begin(), temp.end());
            }
        }
        return res;
    }
};

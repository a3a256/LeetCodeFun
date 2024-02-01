class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(), -1);
        int i, j;
        for(i=0; i<nums1.size(); i++){
            for(j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    break;
                }
            }
            while(j<nums2.size()){
                if(nums2[j] > nums1[i]){
                    res[i] = nums2[j];
                    break;
                }
                j++;
            }
        }
        return res;
    }
};

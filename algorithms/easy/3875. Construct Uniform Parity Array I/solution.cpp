class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int i, j;
        bool is_even = true, is_odd = true;
        for(i=0; i<nums1.size(); i++){
            if(nums1[i]%2 != 0){
                is_even = false;
                for(j=0; j<nums1.size(); j++){
                    if(j!=i && (nums1[i] - nums1[j])%2 == 0){
                        is_even = true;
                    }
                }
            }
        }

        for(i=0; i<nums1.size(); i++){
            if(nums1[i]%2 == 0){
                is_odd = false;
                for(j=0; j<nums1.size(); j++){
                    if(j!=i && (nums1[i] - nums1[j])%2 != 0){
                        is_odd = true;
                    }
                }
            }
        }

        return is_odd || is_even;
    }
};

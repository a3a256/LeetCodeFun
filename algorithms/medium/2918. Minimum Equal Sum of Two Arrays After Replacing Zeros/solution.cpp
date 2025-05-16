class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long i, first = 0, second = 0, one_zeros = 0, two_zeros = 0;
        for(i=0; i<nums1.size(); i++){
            first += nums1[i];
            if(nums1[i] == 0){
                one_zeros++;
            }
        }
        for(i=0; i<nums2.size(); i++){
            second += nums2[i];
            if(nums2[i] == 0){
                two_zeros++;
            }
        }
        first += one_zeros;
        second += two_zeros;
        if(first > second){
            if(two_zeros == 0){
                return -1;
            }
        }else if(second > first){
            if(one_zeros == 0){
                return -1;
            }
        }
        return max(first, second);
    }
};

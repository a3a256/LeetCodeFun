class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int first [10] = {};
        int second [10] = {};
        for(int i: nums1){first[i]++;}
        for(int i: nums2){second[i]++;}
        int one = 0, two = 0;
        for(int i=0; i<10; i++){
            if(first[i] != 0 && second[i] != 0){return i;}
            if(one == 0 && first[i] != 0){one = i;}
            if(two == 0 && second[i] != 0){two = i;}
        }
        return min(two, one)*10 + max(two, one);
    }
};

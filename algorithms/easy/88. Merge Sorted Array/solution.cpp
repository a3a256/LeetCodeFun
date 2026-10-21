class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0){return;}
        if(m == 0){for(int i=0; i<m+n; i++){nums1[i] = nums2[i];}return;}
        int i, j = 0, k;
        int prev, temp, pad = 0;
        for(i=0; i<m+n; i++){
            if(j < n){
                if(nums2[j] <= nums1[i]){
                    prev = nums2[j];
                    for(k=i; k<m+n; k++){
                        temp = nums1[k];
                        nums1[k] = prev;
                        prev = temp;
                    }
                    j++;
                }else if(i >= m+j){
                    nums1[i] = nums2[j];
                    j++;
                }
            }
        }
    }
};

class Solution {
public:
    int solver(vector<int>& nums1, vector<int> &nums2){
        int i, j, k, l, p, res, count_l, count_r;
        long long target;
        res = 0;
        for(i=0; i<nums1.size(); i++){
            j = 0;
            k = nums2.size()-1;
            target = 1LL*nums1[i]*nums1[i];
            while(j<k){
                if(nums2[j] == nums2[k]){
                    if(1LL*nums2[j]*nums2[k] == target){
                        res += pairs(j, k);
                    }
                    break;
                }
                if(1LL*nums2[j]*nums2[k] < target){
                    j++;
                }else if(1LL*nums2[j]*nums2[k] > target){
                    k--;
                }else{
                    l = j;
                    p = k;
                    count_l = 0;
                    while(l<k){
                        if(nums2[l] != nums2[j]){
                            break;
                        }
                        count_l++;
                        l++;
                    }
                    count_r = 0;
                    while(p>j){
                        if(nums2[p] != nums2[k]){
                            break;
                        }
                        count_r++;
                        p--;
                    }

                    res += (count_r*count_l);
                    j = l;
                    k = p;
                }
            }
        }

        return res;

    }

    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        return solver(nums1, nums2) + solver(nums2, nums1);
    }

private:
    int pairs(int i, int j){
        int n = (j-i)+1;
        return (n*(n-1))/2;
    }
};

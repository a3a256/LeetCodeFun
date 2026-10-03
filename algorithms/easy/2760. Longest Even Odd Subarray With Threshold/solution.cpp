class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int j = 0, i, k, prev, count;
        int max_len = (nums[0]%2 == 0 && nums[0] <= threshold)?1:0;
        bool legit;
        for(i=1; i<nums.size(); i++){
            while(nums[j]%2 != 0 && j<i){
                j++;
            }
            legit = nums[j]%2 == 0 && nums[j] <= threshold;
            count = 0;
            if(legit){
                for(k=j; k<=i; k++){
                    if(k == j){prev = nums[k]%2;legit = nums[k]<=threshold;}
                    else{legit = (nums[k]%2 != prev && nums[k]<=threshold);}
                    count++;
                    prev = nums[k]%2;
                    if(!legit){break;}
                }
            }
            if(nums[i]%2 == 0 && nums[i] <= threshold){max_len = max(max_len, 1);}
            if(legit){max_len = max(max_len, count);}else{j=i;}
        }
        return max_len;
    }
};

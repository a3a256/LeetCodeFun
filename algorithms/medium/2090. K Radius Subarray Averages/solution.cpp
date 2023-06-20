class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int i, n=nums.size();
        vector<int> res(n, -1);
        if(n<k*2+1){
            return res;
        }
        int len = 2*k+1, end = 2*k+1, start = 0, center=k;
        long long vsum = 0;
        for(i=0; i<end; i++){
            vsum += nums[i];
        }
        bool is_start = true;
        while(end<=n){
            if(!(is_start)){
                vsum += nums[end-1];
            }else{
                is_start = false;
            }
            res[center] = vsum/len;
            vsum -= nums[start];
            start ++;
            center ++;
            end ++;
        }
        return res;
    }
};

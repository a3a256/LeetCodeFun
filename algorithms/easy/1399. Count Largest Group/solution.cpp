class Solution {
public:
    int countLargestGroup(int n) {
        int i, j, temp_count, ans;
        map<int, vector<int>> mp;
        map<int, int> qp;
        for(i=1; i<=n; i++){
            temp_count = 0;
            j = i;
            while(j>0){
                temp_count += (j%10);
                j = j/10;
            }
            mp[temp_count].push_back(i);
        }
        for(auto it: mp){
            qp[it.second.size()]++;
        }
        for(auto it: qp){
            ans = it.second;
        }
        return ans;
    }
};

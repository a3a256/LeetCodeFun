class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long values = std::accumulate(chalk.begin(), chalk.end(), 0L);
        long remain = k%values;
        int i;
        for(i=0; i<chalk.size(); i++){
            if(remain<chalk[i]){
                return i;
            }
            remain -= chalk[i];
        }
        return -1;
    }
};

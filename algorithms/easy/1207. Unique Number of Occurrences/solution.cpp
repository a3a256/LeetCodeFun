class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int i;
        map<int, int> num_freq;
        set<int> freqs;
        for(i=0; i<arr.size(); i++){
            num_freq[arr[i]]++;
        }
        for(auto it: num_freq){
            freqs.insert(it.second);
        }
        return freqs.size() == num_freq.size();
    }
};

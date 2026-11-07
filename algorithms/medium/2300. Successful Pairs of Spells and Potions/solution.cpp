class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int i, start, end, mid, distance;
        for(i=0; i<spells.size(); i++){
            start = 0;
            end = potions.size()-1;
            distance = 0;
            while(start <= end){
                mid = (start+end)/2;
                if(1LL*potions[mid]*spells[i] >= success){
                    end = mid-1;
                    distance = max(distance, (int)potions.size()-mid);
                }else{
                    start = mid+1;
                }
            }
            spells[i] = distance;
        }
        return spells;
    }
};

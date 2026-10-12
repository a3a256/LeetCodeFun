class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i, j, temp, sz, k;
        vector<pair<int, int>> baskets = {{-1, -1}, {-1, -1}};
        int ans = 0;
        i = 0;
        for(j=0; j<fruits.size(); j++){
            if(baskets[0].first == -1 && baskets[1].first == -1){
                baskets[0].first = fruits[j];
                baskets[0].second = j;
            }else if(baskets[0].first == -1){
                baskets[0].first = fruits[j];
                baskets[0].second = j;
            }else if(baskets[1].first == -1){
                baskets[1].first = fruits[j];
                baskets[1].second = j;
            }else{
                if(fruits[j] != baskets[0].first && fruits[j] != baskets[1].first){
                    if(fruits[j-1] == baskets[0].first){
                        baskets[1] = {fruits[j], j};
                        i = baskets[0].second;
                    }else if(fruits[j-1] == baskets[1].first){
                        baskets[0] = {fruits[j], j};
                        i = baskets[1].second;
                    }
                }else{
                    if(fruits[j] != fruits[j-1]){
                        if(fruits[j] == baskets[0].first){baskets[0].second = j;}
                        else if(fruits[j] == baskets[1].first){baskets[1].second = j;}
                    }
                }
            }
            sz = j-i+1;
            ans = max(ans, sz);
        }
        return ans;
    }
};

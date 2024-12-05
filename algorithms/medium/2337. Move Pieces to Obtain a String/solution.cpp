class Solution {
public:
    bool canChange(string start, string target) {
        int i;
        vector<pair<char, int>> start_pos, target_pos;
        for(i=0; i<start.size(); i++){
            if(start[i] != '_'){
                start_pos.push_back({start[i], i});
            }
            if(target[i] != '_'){
                target_pos.push_back({target[i], i});
            }
        }
        if(start_pos.size() != target_pos.size()){
            return false;
        }

        for(i=0; i<start_pos.size(); i++){
            if(start_pos[i].first != target_pos[i].first){
                return false;
            }
            if(start_pos[i].first == 'R'){
                if(start_pos[i].second > target_pos[i].second){
                    return false;
                }
            }
            if(start_pos[i].first == 'L'){
                if(start_pos[i].second < target_pos[i].second){
                    return false;
                }
            }
        }
        return true;
    }
};

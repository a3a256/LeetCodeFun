class RandomizedSet {
public:
    map<int, int> mp;
    vector<int> v;
    int index;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp[val] == 0){
            mp[val] = v.size()+1;
            v.push_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(mp[val] == 0){
            return false;
        }
        index = mp[val];
        v[index-1] = v.back();
        v.pop_back();
        mp[v[index-1]] = index;
        mp[val] = 0;
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

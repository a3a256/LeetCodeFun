class Solution {
  public: vector<int> findAnagrams(string s, string p){
    map<char, int> mp;
    for(char c: p){mp[c]++;}
    map<char, int> sp;
    int i, j;
    for(i=0; i<p.size(); i++){
      sp[s[i]]++;
    }
    j = 0;
    vector<int> pos;
    bool anagram = false;
    for(i=p.size(); i<s.size(); i++){
      anagram = true;
      for(auto it: sp){
        if(mp[it.first] != it.second){
          anagram = false; break;
        }
      }
      if(anagram){pos.push_back(j);}
      sp[s[i]]++; sp[s[j]]--;
      if(sp[s[j]] == 0){sp.erase(s[j]);} j++;}
    anagram = true;
    for(auto it: sp){
      if(mp[it.first] != it.second){
        anagram = false;
        break;
      }
    }
    if(anagram){pos.push_back(j);}
    return pos;
  }
};

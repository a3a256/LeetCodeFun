class Solution {
public:
    int findComplement(int num) {
        string n = bitset<64>(num).to_string();
        int i;
        for(i=0; i<n.size(); i++){
            if(n[i] != '0') break;
        }
        n = n.substr(i);
        for(i=0; i<n.size(); i++){
            n[i] = (n[i] == '0')?'1':'0';
        }


        return stoi(n, nullptr, 2);
    }
};

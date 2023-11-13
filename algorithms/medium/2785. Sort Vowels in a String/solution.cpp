class Solution {
public:
    string sortVowels(string s) {
        string vowels = "";
        char t;
        int i, index;
        for(i=0; i<s.size(); i++){
            t = tolower(s[i]);
            if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u'){
                vowels += s[i];
            }
        }
        sort(vowels.begin(), vowels.end());
        index = 0;
        for(i=0; i<s.size(); i++){
            t = tolower(s[i]);
            if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u'){
                s[i] = vowels[index];
                index++;
            }
        }
        return s;
    }
};

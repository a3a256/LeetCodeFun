class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3){
            return false;
        }
        int vowels = 0, consonants = 0, index;
        for(char c: word){
            index = (int)c - '0';
            if(!(index >= 0 && index <= 9)){
                index = (int)c - 'a';
                if(!(index >= 0 && index <= 25)){
                    index = (int)c - 'A';
                    if(!(index >= 0 && index <= 25)){
                        return false;
                    }else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                        vowels++;
                    }else{
                        consonants++;
                    }
                }else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                    vowels ++;
                }else{
                    consonants++;
                }
            }
        }
        return vowels > 0 && consonants > 0;
    }
};

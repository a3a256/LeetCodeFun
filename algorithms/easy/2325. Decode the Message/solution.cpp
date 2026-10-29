class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<int> arr(26, -1);
        int unique_index = 0;
        for(char c: key){
            if(c != ' '){
                if(arr[(int)c-'a'] == -1){
                    arr[(int)c-'a'] = unique_index;
                    unique_index++;
                }
            }
        }
        int i;
        for(i=0; i<message.size(); i++){
            if(message[i] != ' '){
                message[i] = arr[(int)message[i]-'a'] + 'a';
            }
        }
        return message;
    }
};

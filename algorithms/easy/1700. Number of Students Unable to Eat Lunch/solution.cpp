class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int mp[2] = {0, 0};
        for(int i: students){
            mp[i]++;
        }
        while(!students.empty() || !sandwiches.empty()){
            if(students[0] == sandwiches[0]){
                mp[sandwiches[0]]--;
                sandwiches.erase(sandwiches.begin()+0);
            }else{
                if(mp[sandwiches[0]] == 0){
                    break;
                }
                students.push_back(students[0]);
            }
            students.erase(students.begin()+0);
        }
        return (int)students.size();
    }
};

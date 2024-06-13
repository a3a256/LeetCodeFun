class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int i, count;
        count = 0;
        for(i=0; i<students.size(); i++){
            count += abs(students[i]-seats[i]);
        }
        return count;
    }
};

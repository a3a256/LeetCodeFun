class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> v = {"Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday", "Sunday"};
        int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(year%4 == 0 && year < 2100){
            arr[1]++;
        }
        int index, i, days, rest;
        index = 4;
        for(i=1971; i<year; i++){
            index++;
            if(i%4 == 0){
                index++;
            }
            if(index>=7){
                index -= 7;
            }
        }
        days = 0;
        for(i=0; i<month-1; i++){
            days += arr[i];
        }
        days += day;
        rest = days%7-1;
        index += rest;
        if(index>=7){
            index -=7;
        }
        return v[index];
    }
};

class Solution {
public:
    int dayOfYear(string date) {
        map<int, int> mp = {{1, 31}, {2, 28}, {3, 31}, {4, 30},
                            {5, 31}, {6, 30}, {7, 31}, {8, 31},
                            {9, 30}, {10, 31}, {11, 30}, {12, 31}};
        string month = "";
        string year = date.substr(0, 4);
        int years = stoi(year);
        if(years%4 == 0 && years>1900){
            mp[2]++;
        }
        string day = "";
        month += date[5];
        month += date[6];
        day += date[8];
        day += date[9];
        int months, i, days;
        months = stoi(month);
        days = 0;
        for(i=1; i<months; i++){
            days += mp[i];
        }
        days += stoi(day);
        return days;
    }
};

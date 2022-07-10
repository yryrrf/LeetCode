/*
Runtime: 5 ms, faster than 9.30% of C++ online submissions for The Number of Full Rounds You Have Played.
Memory Usage: 6 MB, less than 55.35% of C++ online submissions for The Number of Full Rounds You Have Played.
*/
class Solution {
public:
    int numberOfRounds(string loginTime, string logoutTime) {
        int hr1 = stoi(loginTime.substr(0,2));
        int hr2 = stoi(logoutTime.substr(0,2));
        int m1 = stoi(loginTime.substr(3,2));
        int m2 = stoi(logoutTime.substr(3,2));
        int time1 = hr1*60 + m1;
        int time2 = hr2*60 + m2;
        if(time2<time1) {
            time2+=60*24;
        }
        time2-=time2%15;
        return (time2-time1)/15;
    }
};
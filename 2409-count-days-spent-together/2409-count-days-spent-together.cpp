class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);

        if (start > end) return 0;

        int days[] = {0, 31, 59, 90, 120, 151,
                      181, 212, 243, 273, 304, 334};

        int startDay = days[stoi(start.substr(0, 2)) - 1]
                       + stoi(start.substr(3));

        int endDay = days[stoi(end.substr(0, 2)) - 1]
                     + stoi(end.substr(3));

        return endDay - startDay + 1;


    }
};
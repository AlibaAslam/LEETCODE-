class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int e1_start = toMinutes(event1[0]);
        int e1_end   = toMinutes(event1[1]);

        int e2_start = toMinutes(event2[0]);
        int e2_end   = toMinutes(event2[1]);

        return e1_start <= e2_end && e2_start <= e1_end;
    }

    int toMinutes(string s) {
        return stoi(s.substr(0, 2)) * 60
             + stoi(s.substr(3, 2));
    }
};
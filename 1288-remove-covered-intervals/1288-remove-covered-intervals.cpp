class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0])
                return b[1] < a[1];
            return a[0] < b[0];
        });

        int end = 0;
        int n = 0;

        for (auto& a : intervals) {
            if (a[1] > end) {
                n++;
                end = a[1];
            }
        }

        return n;
    }
};
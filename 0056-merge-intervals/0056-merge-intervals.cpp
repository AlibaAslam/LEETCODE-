class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n <= 1) {
            return intervals;
        }

        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });

        vector<vector<int>> ans;
        vector<int> update = intervals[0];
        
        for (int i = 1; i < n; i++) {
            if (update[1] >= intervals[i][0]) {
                update[1] = max(update[1], intervals[i][1]);
            } else {
                ans.push_back(update);
                update = intervals[i];
            }
        }
        ans.push_back(update);
        
        return ans;
    }
};
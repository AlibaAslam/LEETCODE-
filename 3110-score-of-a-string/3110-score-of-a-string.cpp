class Solution {
public:
    int scoreOfString(string s) {
        int currsum = 0;
        for (int i = 1; i < s.length(); i++) {
            currsum += abs(s[i] - s[i - 1]);
        }
        return currsum;
    }
};
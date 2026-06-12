class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0;
        vector<int> frq(26, 0);
        int maxFreq = 0;
        int i = 0;
        for (int j = 0; j < n; j++) {
            frq[s[j] - 'A']++;
            maxFreq = max(maxFreq, frq[s[j] - 'A']);
            int len = j - i + 1;
            if (len - maxFreq <= k) {
                ans = max(ans, len);
            } else {
                frq[s[i] - 'A']--;
                i++;
            }
        }
        return ans;
    }
};
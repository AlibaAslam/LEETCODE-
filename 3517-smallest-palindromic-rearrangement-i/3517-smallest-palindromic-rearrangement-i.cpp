class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        vector<int> freq(26, 0);
        for (int i = 0; i < n / 2; i++) {
            freq[s[i] - 'a']++;
        }
        string ans = "";
        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                ans += char(i + 'a');
                freq[i]--;
            }
        }
        string left = ans;
        if (n % 2 != 0) {
            ans += s[n / 2];
        }
        for (int i = left.length() - 1; i >= 0; i--) {
            ans += left[i];
        }
        return ans;
    }
};
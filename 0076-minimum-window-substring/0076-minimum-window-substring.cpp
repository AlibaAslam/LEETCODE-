class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> needed;
        unordered_map<char, int> window;
        for (char ch : t) {
            needed[ch]++;
        }
        int left = 0;
        int right = 0;
        int valid = 0;
        int start = 0;
        int len = INT_MAX;
        while (right < s.size()) {
            char c = s[right];
            right++;
            if (needed.find(c) != needed.end()) {
                window[c]++;
                if (window[c] == needed[c]) {
                    valid++;
                }
            }
            while (valid == needed.size()) {
                if (right - left < len) {
                    start = left;
                    len = right - left;
                }
                char d = s[left];
                left++;
                if (needed.find(d) != needed.end()) {
                    if (window[d] == needed[d]) {
                        valid--;
                    }
                    window[d]--;
                }
            }
        }
        return len == INT_MAX ? "" : s.substr(start, len);
    }
};
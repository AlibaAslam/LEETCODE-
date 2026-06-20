class Solution {
public:
    bool validPalindrome(string s) {
        int sz = s.size();
        int st = 0;
        int end = sz - 1;
        while (st < end) {
            if (s[st] != s[end]) {
                return check(s, st + 1, end) || check(s, st, end - 1);
            }
            st++;
            end--;
        }
        return true;
    }

    bool check(string s, int st, int end) {
        while (st < end) {
            if (s[st] != s[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
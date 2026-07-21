class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        string t = "1" + s + "1";
        int ans = 0;
        int pre = -1;
        int maxZero = 0;
        int i = 0;

        while (i < t.length()) {
            int j = i + 1;

            while (j < t.length() && t[j] == t[i]) {
                j++;
            }

            int cur = j - i;

            if (t[i] == '1') {
                ans += cur;
            } 
            else {
                if (pre != -1) {
                    maxZero = max(maxZero, pre + cur);
                }
                pre = cur;
            }

            i = j;
        }

        return ans - 2 + maxZero;
    }
};
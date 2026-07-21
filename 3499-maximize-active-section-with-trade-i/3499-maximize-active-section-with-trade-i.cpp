#include <string>
#include <algorithm>

class Solution {
public:
    int maxActiveSectionsAfterTrade(std::string s) {
        // Step 1: Augment string with '1' at both ends
        std::string t = "1" + s + "1";
        
        int total_ones = 0;
        int max_trade_gain = 0;
        int prev_zero_len = -1;
        
        int n = t.length();
        int i = 0;
        
        // Two-pointer run-length encoding
        while (i < n) {
            int j = i;
            while (j < n && t[j] == t[i]) {
                j++;
            }
            
            int len = j - i;
            
            if (t[i] == '1') {
                total_ones += len;
            } else {
                // Check sum with the previous adjacent zero block
                if (prev_zero_len != -1) {
                    max_trade_gain = std::max(max_trade_gain, prev_zero_len + len);
                }
                prev_zero_len = len;
            }
            
            i = j;
        }
        
        // Subtract the 2 augmented '1's
        total_ones -= 2;
        
        return total_ones + max_trade_gain;
    }
};
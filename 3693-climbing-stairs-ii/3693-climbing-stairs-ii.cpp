#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int climbStairs(int n, std::vector<int>& costs) {
        std::vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0; 

        for (int i = 1; i <= n; i++) {   
            for (int j = 1; j <= 3; j++) {
                if (i - j >= 0 && dp[i - j] != INT_MAX) {
                    
                    int stepCost = costs[i - 1] + j * j; 
                    dp[i] = std::min(dp[i], dp[i - j] + stepCost);
                }
            }
        }

        return dp[n];
    }
};
#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int climbStairs(int n, std::vector<int>& costs) {
        std::vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0; // Base case: starting at stair 0 costs nothing

        for (int i = 1; i <= n; i++) {   
            for (int j = 1; j <= 3; j++) {
                if (i - j >= 0 && dp[i - j] != INT_MAX) {
                    // Difference squared: (j)^2 or (i - (i - j))^2 is just j * j
                    int stepCost = costs[i - 1] + j * j; 
                    dp[i] = std::min(dp[i], dp[i - j] + stepCost);
                }
            }
        }

        return dp[n];
    }
};
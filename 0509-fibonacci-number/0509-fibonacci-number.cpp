class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        vector<int> dp(n + 1, 0);  
        return func(n, dp);
    }

    int func(int n, vector<int>& dp) {
        if (n <= 1) return n;
        if (dp[n] != 0) return dp[n];
        
        dp[n] = func(n - 1, dp) + func(n - 2, dp);
        return dp[n];
    }
};
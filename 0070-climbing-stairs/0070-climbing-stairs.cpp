class Solution {
public:
    // int stair(int n, vector<int>&dp)
    // {
    //     if(n<=1)
    //     return 1;

    //     if(dp[n]!=-1)
    //     {
    //         return dp[n];
    //     }
    //   dp[n] = stair(n-1, dp)+stair(n-2,dp); 
    //   return dp[n];
    // }
    int climbStairs(int n) {

        // THIS RECURSION APPROACH GIVES TIME LIMIT EXCEEDED
        // if(n<=1)
        // return 1;
        //  return climbStairs(n-1)+climbStairs(n-2);


        // THIS APPRAOCH IS TOP DOWN RECURSION APPROACH
        // vector<int>dp(n+1,-1);
        // return stair(n, dp);


        // THIS APPROACH IS BOTTOM DP APPROACH
        vector<int>dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2; i<=n; i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];


        
    }
};
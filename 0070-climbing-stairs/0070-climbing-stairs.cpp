class Solution {
public:
    int stair(int n, vector<int>&dp)
    {
        if(n<=1)
        return 1;

        if(dp[n]!=-1)
        {
            return dp[n];
        }
      dp[n] = stair(n-1, dp)+stair(n-2,dp); 
      return dp[n];
    }
    int climbStairs(int n) {

        // THIS RECURSION APPROACH GIVES TIME LIMIT EXCEEDED
        // if(n<=1)
        // return 1;
        //  return climbStairs(n-1)+climbStairs(n-2);

        vector<int>dp(n+1,-1);
        return stair(n, dp);
        


        
    }
};
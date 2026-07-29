class Solution {

    int func(vector<int>& nums , int idx, vector<int>&dp)
    {

        if(idx<0)
        return 0;
        if(idx==0)
        return nums[0];
        if(dp[idx]!=-1)
        return dp[idx];
        int take= nums[idx]+ func(nums, idx-2,dp);
        int not_take= func(nums,idx-1,dp);
        return dp[idx]=max(take,not_take);


    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return func(nums,n-1,dp);
        
        
    }
};
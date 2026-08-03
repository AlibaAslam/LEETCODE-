class Solution {
    int plan(vector<int>& nums, int idx, vector<int>& dp) {
        if (idx < 0)
            return 0;
        if (idx == 0)
            return nums[0];
        if (dp[idx] != -1)
            return dp[idx];

        int take = nums[idx] + plan(nums, idx - 2, dp);
        int not_take = plan(nums, idx - 1, dp);

        return dp[idx] = max(take, not_take);
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];

        vector<int> arr1(nums.begin(), nums.end() - 1);
        vector<int> arr2(nums.begin() + 1, nums.end());

        int m = arr1.size();
        vector<int> dp1(m, -1);
        vector<int> dp2(m, -1);

        return max(plan(arr1, m - 1, dp1), plan(arr2, m - 1, dp2));
    }
};
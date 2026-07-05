class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxm = 0;
        int n = nums.size();
        int idx = -1;
        int sum = 0;
        
        for(int i = 0; i <= n - 1; i++)
        {
            if(nums[i] == 0)
            {
                int prev_ones = i - 1 - idx;
                idx = i;
                sum = prev_ones;
            }
            else
            {
                sum = sum + nums[i];
            }
            maxm = max(maxm, sum);
        }
        
        if(maxm == n)
        {
            return maxm - 1;
        }
        return maxm;
    }
};
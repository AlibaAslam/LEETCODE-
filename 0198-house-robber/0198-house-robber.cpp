class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        
        vector<int> amount(n);
        amount[0] = nums[0];
        amount[1] = max(nums[1], nums[0]);
        
        for(int i = 2; i < n; i++) {
            amount[i] = max(nums[i] + amount[i - 2], amount[i - 1]);
        }
        
        return amount[n - 1];
    }
};
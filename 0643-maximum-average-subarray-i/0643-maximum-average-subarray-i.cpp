class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double current_sum = 0;
        
        for (int i = 0; i < k; i++) {
            current_sum += nums[i];
        }
        
        double maxm = current_sum;
        
        for (int i = k; i < nums.size(); i++) {
            current_sum += nums[i] - nums[i - k];
            maxm = max(maxm, current_sum);
        }
        
        return maxm / k;
    }
};

class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefMax(n), sufMax(n);
        
        prefMax[0] = nums[0];
        for (int i = 1; i < n; i++)
            prefMax[i] = max(prefMax[i-1], nums[i]);
        
        sufMax[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--)
            sufMax[i] = max(sufMax[i+1], nums[i]);
        
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            bool greaterThanLeft = (i == 0) || (nums[i] > prefMax[i-1]);
            bool greaterThanRight = (i == n-1) || (nums[i] > sufMax[i+1]);
            if (greaterThanLeft || greaterThanRight)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> s;
        for (int i = 0; i < 2 * n; i++) 
        {
            int idx = i % n;
            while (!s.empty() && nums[idx] > nums[s.top()]) 
            {
                int in = s.top();
                s.pop();
                ans[in] = nums[idx];
            }
            if (i < n) {
                s.push(idx);
            }
        }
        return ans;
    }
};
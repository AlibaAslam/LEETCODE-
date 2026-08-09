class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        
        vector<int> ans(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            int st = 0;
            int en = nums.size() - 1;
            while (st <= en) {
                int mid = st + (en - st) / 2;
                if (nums[mid] <= queries[i]) {
                    st = mid + 1;
                } else {
                    en = mid - 1;
                }
            }
            ans[i] = st;
        }
        return ans;
    }
};
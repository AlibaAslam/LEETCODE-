class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for (int i : nums) {
            mp[i]++;
        }

        vector<pair<int, int>> result(mp.begin(), mp.end());

        sort(result.begin(), result.end(), [](auto a, auto b) {
            if (a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        vector<int> sorted_nums;
        for (auto p : result) {
            for (int i = 0; i < p.second; i++) {
                sorted_nums.push_back(p.first);
            }
        }

        return sorted_nums;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1. Har number ki frequency count karo map mein
        // Yeh negative aur bade numbers ko aaram se handle kar lega
        unordered_map<int, int> freq_map;
        for (int num : nums) {
            freq_map[num]++;
        }

        // 2. Max-heap (priority queue) banao jo pair store karega: {frequency, number}
        // Taaki sabse zyada frequency wala element hamesha upar rahe
        priority_queue<pair<int, int>> max_heap;
        for (auto& pair : freq_map) {
            max_heap.push({pair.second, pair.first});
        }

        // 3. Top K elements ko nikal kar ans vector mein daal do
        vector<int> ans(k);
        for (int i = 0; i < k; i++) {
            ans[i] = max_heap.top().second; // Element ko uthao
            max_heap.pop();                 // Use heap se hatao
        }

        return ans;
    }
};
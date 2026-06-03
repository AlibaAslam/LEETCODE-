class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        std::unordered_map<int, int> count;
        std::unordered_map<int, int> first;
        std::unordered_map<int, int> last;
        
        int degree = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (first.find(num) == first.end()) {
                first[num] = i;
            }
            last[num] = i;
            count[num]++;
            if (count[num] > degree) {
                degree = count[num];
            }
        }
        
        int minLength = nums.size();
        for (auto& pair : count) {
            if (pair.second == degree) {
                int num = pair.first;
                int len = last[num] - first[num] + 1;
                if (len < minLength) {
                    minLength = len;
                }
            }
        }
        
        return minLength;
    }
};
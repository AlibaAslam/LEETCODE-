
class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int i : arr) {
            freq[i]++;
        }

        sort(arr.begin(), arr.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        for (int i : arr) {
            if (freq[i] == 0) {
                continue;
            }
            if (freq[2 * i] == 0) {
                return false;
            }
            freq[i]--;
            freq[2 * i]--;
        }

        return true;
    }
};
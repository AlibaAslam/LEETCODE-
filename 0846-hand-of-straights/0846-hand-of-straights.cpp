class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int count = groupSize;
        unordered_map<int, int> freq;
        if (hand.size() % groupSize != 0)
            return false;

        for (int i : hand) {
            if (freq.count(i)) {
                freq[i]++;
            } else {
                freq[i] = 1;
            }
        }
        
        sort(hand.begin(), hand.end());
        
        for (int i : hand) {
            if (freq[i] == 0)
                continue;

            for (int j = 0; j < count; j++) {
                if (freq[i + j] == 0) {
                    return false;
                } else {
                    freq[i + j] = freq[i + j] - 1;
                }
            }
        }

        return true;
    }
};
class Solution {
public:
    int findKthPositive(std::vector<int>& arr, int k) {
        for (int num : arr) {
            if (num <= k) {
                k++; // Every number in arr that is <= k pushes our missing answer 1 step further
            } else {
                break;
            }
        }
        return k;
    }
};
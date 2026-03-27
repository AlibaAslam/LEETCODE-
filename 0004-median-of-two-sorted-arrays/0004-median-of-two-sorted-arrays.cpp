class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // min-heap
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int val : nums1)
            pq.push(val);

        for (int val : nums2)
            pq.push(val);

        int n = pq.size() - 1;  // same as your logic

        if (n % 2 == 0) {
            int i = 0;
            while (i != n / 2) {
                pq.pop();
                i++;
            }
            return pq.top();
        }
        else {
            int i = 0;
            double sum = 0;

            while (i != n / 2) {
                pq.pop();
                i++;
            }

            sum = pq.top();
            pq.pop();
            sum += pq.top();

            return sum / 2.0;
        }
    }
};
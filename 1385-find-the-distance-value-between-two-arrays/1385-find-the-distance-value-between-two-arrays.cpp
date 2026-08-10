class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int ans = 0;
        sort(arr2.begin(), arr2.end());
        for (int i : arr1) {
            int l = 0;
            int r = n2 - 1;
            int f = 0;
            while (r >= l) {
                int mid = l + (r - l) / 2;
                if (abs(i - arr2[mid]) <= d) {
                    f = 1;
                    break;
                }

                if (arr2[mid] > i) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            if (f == 0)
                ans++;
        }
        return ans;
    }
};
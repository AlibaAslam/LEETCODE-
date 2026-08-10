class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        
        for (int i : arr1) {
            int flag = 0;
            int l = 0;
            int r = n2 - 1;
            
            while (l <= r) {
                int mid = l + (r - l) / 2;
                
                if (abs(i - arr2[mid]) <= d) {
                    flag = 1;
                    break;
                }
                
                if (arr2[mid] > i) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            
            if (flag == 0) {
                ans++;
            }
        }
        
        return ans;
    }
};
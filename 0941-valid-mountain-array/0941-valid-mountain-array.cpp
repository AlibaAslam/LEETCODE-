class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i, j;

        for(i = 0; i < n - 1; i++) {
            if(arr[i] >= arr[i + 1])
                break;
        }

        if(i == 0 || i == n - 1)
            return false;

        for(j = n - 1; j > 0; j--) {
            if(arr[j] >= arr[j - 1])
                break;
        }

        return i == j;
         
    }
};
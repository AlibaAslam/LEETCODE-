class Solution {
public:
    bool isTrionic(vector<int>& arr) {
        int inc = 0;
        int dec = 0;
        int k = 0;
        int i = 0;
        int n = arr.size();
        
        while ((i < n - 1) && (arr[i] < arr[i + 1])) {
            inc = 1;
            i++;
        }
        while ((i < n - 1) && (arr[i] > arr[i + 1])) {
            dec = 1;
            i++;
        }
        while ((i < n - 1) && (arr[i] < arr[i + 1])) {
            k = 1;
            i++;
        }
        
        return (inc == 1 && dec == 1 && k == 1 && i == n - 1);
    }
};
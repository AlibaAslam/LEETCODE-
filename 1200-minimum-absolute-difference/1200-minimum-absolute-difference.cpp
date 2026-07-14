class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> matrix;
        sort(arr.begin(), arr.end());
        
        int minm = INT_MAX;
        for(int i = 1; i < arr.size(); i++)
        {
            minm = min(minm, arr[i] - arr[i-1]);
        }
        
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] - arr[i-1] == minm)
            {
                matrix.push_back({arr[i-1], arr[i]});
            }
        }
        return matrix;
    }
};
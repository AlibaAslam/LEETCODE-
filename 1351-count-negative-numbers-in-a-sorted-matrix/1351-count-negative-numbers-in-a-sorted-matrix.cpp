class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        
        for(int i = 0; i < m; i++) {
            int l = 0;
            int r = n - 1;
            int firstneg = n;
            
            while(l <= r) {
                int mid = l + (r - l) / 2;
                if(grid[i][mid] < 0) {
                    firstneg = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            count += n - firstneg;
        }
        
        return count;
    }
};
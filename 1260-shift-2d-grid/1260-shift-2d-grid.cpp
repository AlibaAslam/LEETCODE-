class Solution {
    void reverse(vector<vector<int>>& grid, int i, int j, int column) {
        while (i < j) {
            swap(grid[i / column][i % column], grid[j / column][j % column]);
            i++;
            j--;
        }
    }
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int column = grid[0].size();
        int size = row * column;
        
        k = k % size;
        if (k == 0) return grid;
        
        reverse(grid, 0, size - 1, column);
        reverse(grid, 0, k - 1, column);
        reverse(grid, k, size - 1, column);
        
        return grid;
    }
};
class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
       int rows = grid.size();
    int cols = grid[0].size();
    vector<int> rowCount(rows, 0);
    vector<int> colCount(cols, 0);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowCount[i] += grid[i][j];
            colCount[j] += grid[i][j];
        }
    }
    
    long long count = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                count += (rowCount[i] - 1) * (colCount[j] - 1);
            }
        }
    }
    return count;
    }
};
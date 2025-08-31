class Solution {
public:
    
    
        bool hasSameColorSquare(vector<vector<char>>& grid) {
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    if (grid[i][j] == grid[i][j + 1] && grid[i][j] == grid[i + 1][j] && grid[i][j] == grid[i + 1][j + 1]) {
                        return true;
                    }
                }
            }
            return false;
        }
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            char original = grid[i][j];
            // Change color and check if there exists a 2x2 square of the same color
            grid[i][j] = (original == 'W') ? 'B' : 'W';
            if (hasSameColorSquare(grid)) {
                return true;
            }
            // Revert the change
            grid[i][j] = original;
        }
    }
    return false;
    }
};
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Row check
        for (int i = 0; i < 9; i++) {
            set<char> s;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (s.count(board[i][j])) return false;
                    s.insert(board[i][j]);
                }
            }
        }

        // Column check
        for (int i = 0; i < 9; i++) {
            set<char> s;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    if (s.count(board[j][i])) return false;
                    s.insert(board[j][i]);
                }
            }
        }

        // Box check
        vector<pair<int, int>> start = {
            {0, 0}, {0, 3}, {0, 6},
            {3, 0}, {3, 3}, {3, 6},
            {6, 0}, {6, 3}, {6, 6}
        };
        
        for (const auto& p : start) {
            int i = p.first;
            int j = p.second;
            set<char> s;
            for (int row = i; row < i + 3; row++) {
                for (int col = j; col < j + 3; col++) {
                    if (board[row][col] != '.') {
                        if (s.count(board[row][col])) return false;
                        s.insert(board[row][col]);
                    }
                }
            }
        }

        return true;
    }
};

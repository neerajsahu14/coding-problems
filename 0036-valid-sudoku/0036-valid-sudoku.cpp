class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row
        for(int i=0; i<9; i++){
            set<char> s;
            for(int j=0; j<9; j++){
                if(s.find(board[i][j]) != s.end()) return false;
                if(board[i][j] != '.') s.insert(board[i][j]);
            }
        }
        // column
        for(int i=0; i<9; i++){
            set<char> s;
            for(int j=0; j<9; j++){
                if(s.find(board[j][i]) != s.end()) return false; 
                if(board[j][i] != '.') s.insert(board[j][i]);
            }
        }
        // box

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
                    if(s.find(board[row][col]) != s.end()) return false;
                    if(board[row][col] != '.') s.insert(board[row][col]);
                }   
            }
        }
    return true;
    }
};
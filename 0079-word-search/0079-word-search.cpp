class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        function<bool(int, int, int)> dfs = [&](int r, int c, int i) {
            if(i==word.size()) return true;
            if(r<0 || c<0 || r>=row ||
             c>=col || word[i]!=board[r][c] || visited[r][c])
             return false;
             visited[r][c]=true;
             bool res = dfs(r+1,c,i+1) || dfs(r-1,c,i+1) || dfs(r,c+1,i+1) || dfs(r,c-1,i+1);
             visited[r][c]=false;
             return res;
        };
        
        for(int r=0;r<row;r++){
            for(int c=0; c<col; c++){
                if(dfs(r,c,0)) return true;
            }
        }
        return false;
    }
};
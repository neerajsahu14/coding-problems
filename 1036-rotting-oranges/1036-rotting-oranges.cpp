class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cntF = 0;
        int time = -1;
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
                if (grid[i][j] == 1)
                    cntF++;
            }
        }
        if (cntF == 0)
            return 0;
        if (q.empty())
            return -1;

        vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                auto [x, y] = q.front();
                q.pop();
                for (auto [dx, dy] : dirs) {
                    int i = x + dx;
                    int j = y + dy;
                    if (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1) {
                        grid[i][j] = 2;
                        cntF--;
                        q.push({i, j});
                    }
                }
            }
            time++;
        }
        if (cntF == 0) {
            return time;
        }
        return -1;
    }
};
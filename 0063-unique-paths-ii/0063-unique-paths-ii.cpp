class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        unordered_map<int,unordered_map<int,int>> dp;
        dp[n-1][m-1] = 1;
        function<int(int, int)> dfs =[&](int r, int c){
            if(r>n-1 || c>m-1 || obstacleGrid[r][c])
                return 0;
            if(dp[r][c]) return dp[r][c];
            dp[r][c] = dfs(r+1,c) + dfs(r,c+1);
            return dp[r][c];
        };
        return dfs(0,0);
    }
};
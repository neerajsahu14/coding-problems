class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid[0].size();
        int n = obstacleGrid.size();
        if(obstacleGrid[n-1][m-1]) return 0;

        vector<long long> dp(m,0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1; j>=0;j--){
                if(obstacleGrid[i][j]){
                    dp[j]=0;
                }else if (i == n - 1 && j == m - 1) {
                    dp[j] = 1;
                } else if(j+1<m)
                    dp[j] +=dp[j+1];
            }
        }
        return static_cast<int>(dp[0]);
    }
};
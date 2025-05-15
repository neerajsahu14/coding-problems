class Solution {
    // boot force 
    int solve(int m, int n,int a, int b){
        if (a > m || b > n) {
            return 0;
        }
        int ans =0;
        if(a ==m && b==n){
            return 1;
        }
        ans+=solve(m,n,a+1,b);
        ans+=solve(m,n,a,b+1);
        return ans;

    }
public:
    int uniquePaths(int m, int n) {
        // return solve(m,n,1,1);
        vector<vector<int>> dp(m,vector<int>(n,1));
        for(int i=1; i<m; i++){
            for(int j=1; j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }

    


};
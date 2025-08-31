class Solution {
public:
    int checkRecord(int n) {
        vector<vector<vector<int>>> dp(2,vector<vector<int>>(2,vector<int>(3,1)));
        const long long  mod =1e9+7;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= 1; j++) {
                for (int k = 0; k <=2; k++) {
                    long long ans= dp[(i-1)&1][j][0];
                    ans+= (k<2?dp[(i-1)&1][j][k+1]:0);
                    ans+=(j==0?dp[(i-1)&1][j+1][0]:0);
                    dp[i&1][j][k]= ans % mod;
                }
            }
        }
        return dp[n&1][0][0]%mod;
    }
};

namespace {
    const auto __ = [] {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        return 0;
    }();
}
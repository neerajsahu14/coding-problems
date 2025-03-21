class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int Min = INT_MAX;
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (prices[i] < Min) {
                Min = prices[i];
            } else {
                ans = max(ans, prices[i] - Min);
            }
        }
        
        return ans;
    }
};
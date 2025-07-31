
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int total = 0;
        int n = prices.size();
        for(int i=1; i<n; i++){
            if(prices[i]>prices[i-1])
                total+= prices[i]-prices[i-1];
        }
        return total;
    }
};

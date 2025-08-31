class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int, int>>,
                       vector<pair<double, pair<int, int>>>, greater<>>
            MH;
        int N = arr.size();
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                MH.push({(double)arr[i] / arr[j], {arr[i], arr[j]}});
            }
        }

        pair<int, int> result;
        for (int i = 0; i < k; ++i) {
            result = MH.top().second;
            MH.pop();
        }

        return {result.first, result.second};
    }
};
class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
         sort(points.begin(), points.end());
    int n = points.size();
    int cnt = 1;
    int prev = points[0][0];
    for (int i = 1; i < n; ++i) {
        if (points[i][0] - prev > w) {
            cnt++;
            prev = points[i][0];
        }
    }
    return cnt;
    }
};
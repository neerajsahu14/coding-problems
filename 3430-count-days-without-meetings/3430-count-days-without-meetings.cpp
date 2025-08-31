class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {

        sort(meetings.begin(), meetings.end());

        int count = 0;
        int end = 0;

        for (const auto& meeting : meetings) {
            int start = meeting[0];
            int finish = meeting[1];

            count += max(0, start - end - 1);

            end = max(end, finish);
        }
        count += max(0, days - end);

        return count;
    }
};
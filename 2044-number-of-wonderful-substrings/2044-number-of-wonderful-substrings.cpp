class Solution {
public:
   int get(char c) {
        return c - 'a';
    }

    long long wonderfulSubstrings(string word) {
        vector<long long> cnt(1024, 0);
        cnt[0] = 1;

        int curr = 0;
        long long res = 0;

        for (char c : word) {
            curr ^= 1 << get(c);

            res += cnt[curr];
            for (char odd = 'a'; odd <= 'j'; odd++) {
                int oddState = curr ^ (1 << get(odd));
                res += cnt[oddState];
            }

            cnt[curr]++;
        }

        return res;
    }
};
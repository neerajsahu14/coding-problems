class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp = score;
        sort(temp.begin(), temp.end(), greater<int>());
        vector<string> m = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        unordered_map<int, string> mp;
        for (int i = 0; i < temp.size(); i++) {
            if (i < 3) {
                mp[temp[i]] = m[i];
            } else {
                mp[temp[i]] = to_string(i + 1);
            }
        }
        vector<string> ans;
        for (int s : score) {
            ans.push_back(mp[s]);
        }
        return ans;
    }
};
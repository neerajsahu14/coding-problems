class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
    int start = 0, maxLen = 0;

    for (int i = 0; i < s.length(); i++) {
        if (map.find(s[i]) != map.end() && map[s[i]] >= start) {
            start = map[s[i]] + 1;
        }
        map[s[i]] = i;
        maxLen = max(maxLen, i - start + 1);
    }

    return maxLen;
    }
};
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> sIndex, tIndex;
    
    for (int i = 0; i < s.length(); i++) {
        if (sIndex.find(s[i]) == sIndex.end()) {
            sIndex[s[i]] = i;
        }
        if (tIndex.find(t[i]) == tIndex.end()) {
            tIndex[t[i]] = i;
        }
    }
    
    int difference = 0;
    for (int i = 0; i < s.length(); i++) {
        difference += abs(sIndex[s[i]] - tIndex[s[i]]);
    }
    
    return difference;
    }
};
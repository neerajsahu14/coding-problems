class Solution {
public:
    int numberOfSpecialChars(string word) {
        std::map<char, std::vector<int>> charIndexMap;
        for (int i = 0; i < word.length(); ++i) {
            if (islower(word[i])) {
                charIndexMap[word[i]].push_back(i);
            }
        }
        int specialCharCount = 0;
        for (auto& entry : charIndexMap) {
            char upperCaseChar = toupper(entry.first);
            if (word.find(upperCaseChar) != std::string::npos) {
                int index = word.find(upperCaseChar);
                if (*std::max_element(entry.second.begin(), entry.second.end()) < index) {
                    specialCharCount++;
                }
            }
        }
        return specialCharCount;
    }
};
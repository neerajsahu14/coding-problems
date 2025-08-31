class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans = 0;
        
        for (int num : nums) {
            freq[num]++;
        }
        
        for (auto it : freq) {
            if (it.second == 2) {
                ans ^= it.first;
            }
        }
        
        return ans;
    }
};
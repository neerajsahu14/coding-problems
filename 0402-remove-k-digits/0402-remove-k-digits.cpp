class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        string ans;
        
        for (char digit : num) {
            while (!ans.empty() && ans.back() > digit && k > 0) {
                ans.pop_back();
                k--;
            }
            if (!ans.empty() || digit != '0') {
                ans.push_back(digit);
            }
        }
        
        while (!ans.empty() && k > 0) {
            ans.pop_back();
            k--;
        }
        
        return ans.empty() ? "0" : ans.substr(0, n - k);
    }
};

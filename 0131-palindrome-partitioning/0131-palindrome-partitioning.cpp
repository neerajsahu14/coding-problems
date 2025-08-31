class Solution {
    vector<vector<string>> ans;
    vector<string> curr;
public:
    void solve(int i,int l,string s){
            if(i>=l){
                ans.push_back(curr);
                return;
            }
            for(int j=i; j<l; j++){
                string sub=s.substr(i,j-i+1);
                if(isPalindrome(sub)){
                    curr.push_back(sub);
                    solve(j+1,l,s);
                    curr.pop_back();
                }
            }
        }
    bool isPalindrome(string str) {
        int n = str.length();
        for (int i = 0; i < n / 2; i++) {
            if (str[i] != str[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        int l=s.length();
        solve(0,l,s);
        return ans;
        
    }
};
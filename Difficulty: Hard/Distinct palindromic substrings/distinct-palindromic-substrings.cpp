class Solution {
  public:
    set<string> ans;
    vector<string> palindromicSubstr(string &s) {
        // code here
        int n = s.size();
        for(int i=0; i<n; i++){
            pal(s,i,i); // odd string
            pal(s,i,i+1); // even strig
        }
        return vector<string>(ans.begin(),ans.end());
    }
    void pal(string &s, int l, int r){
        
        while(l>=0 && r<s.size() && s[l]==s[r]){
            ans.insert(s.substr(l,r - l + 1));
            l--;
            r++;
        }
    }
};